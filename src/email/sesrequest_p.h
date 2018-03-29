/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_SESREQUEST_P_H
#define QTAWS_SESREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "sesrequest.h"

namespace QtAws {
namespace SES {

class SESRequest;

class QTAWS_EXPORT SESRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    SESRequest::Action action; ///< SES action to be performed.
    QString apiVersion;        ///< SES API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< SES request (query string) parameters. @todo?

    SESRequestPrivate(const SESRequest::Action action, SESRequest * const q);
    SESRequestPrivate(const SESRequestPrivate &other, SESRequest * const q);

    static QString toString(const SESRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(SESRequest)

};

} // namespace SES
} // namespace QtAws

#endif
