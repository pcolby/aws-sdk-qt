/*
    Copyright 2013-2021 Paul Colby

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

#ifndef QTAWS_SUPPORTAPPREQUEST_P_H
#define QTAWS_SUPPORTAPPREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "supportapprequest.h"

namespace QtAws {
namespace SupportApp {

class SupportAppRequest;

class SupportAppRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    SupportAppRequest::Action action; ///< SupportApp action to be performed.
    QString apiVersion;        ///< SupportApp API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< SupportApp request (query string) parameters. @todo?

    SupportAppRequestPrivate(const SupportAppRequest::Action action, SupportAppRequest * const q);
    SupportAppRequestPrivate(const SupportAppRequestPrivate &other, SupportAppRequest * const q);

    static QString toString(const SupportAppRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(SupportAppRequest)

};

} // namespace SupportApp
} // namespace QtAws

#endif
