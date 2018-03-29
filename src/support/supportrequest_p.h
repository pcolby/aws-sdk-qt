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

#ifndef QTAWS_SUPPORTREQUEST_P_H
#define QTAWS_SUPPORTREQUEST_P_H

#include "support_p.h"
#include "supportrequest.h"

namespace QtAws {
namespace Support {

class SupportRequest;

class QTAWS_EXPORT SupportRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    SupportRequest::Action action; ///< Support action to be performed.
    QString apiVersion;        ///< Support API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Support request (query string) parameters. @todo?

    SupportRequestPrivate(const SupportRequest::Action action, SupportRequest * const q);
    SupportRequestPrivate(const SupportRequestPrivate &other, SupportRequest * const q);

    static QString toString(const SupportRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(SupportRequest)

};

} // namespace Support
} // namespace QtAws

#endif
