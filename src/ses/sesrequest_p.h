/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_SESREQUEST_P_H
#define QTAWS_SESREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "sesrequest.h"

namespace QtAws {
namespace SES {

class SesRequest;

class QTAWS_EXPORT SesRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    SesRequest::Action action; ///< SES action to be performed.
    QString apiVersion;        ///< SES API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< SES request (query string) parameters. @todo?

    SesRequestPrivate(const SesRequest::Action action, SesRequest * const q);
    SesRequestPrivate(const SesRequestPrivate &other, SesRequest * const q);

    static QString toString(const SesRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(SesRequest)

};

} // namespace SES
} // namespace QtAws

#endif
