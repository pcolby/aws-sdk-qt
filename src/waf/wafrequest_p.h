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

#ifndef QTAWS_WAFREQUEST_P_H
#define QTAWS_WAFREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "wafrequest.h"

namespace QtAws {
namespace WAF {

class WafRequest;

class QTAWS_EXPORT WafRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    WafRequest::Action action; ///< WAF action to be performed.
    QString apiVersion;        ///< WAF API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< WAF request (query string) parameters. @todo?

    WafRequestPrivate(const WafRequest::Action action, WafRequest * const q);
    WafRequestPrivate(const WafRequestPrivate &other, WafRequest * const q);

    static QString toString(const WafRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(WafRequest)

};

} // namespace WAF
} // namespace QtAws

#endif
