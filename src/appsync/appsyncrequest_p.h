/*
    Copyright 2013-2019 Paul Colby

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

#ifndef QTAWS_APPSYNCREQUEST_P_H
#define QTAWS_APPSYNCREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "appsyncrequest.h"

namespace QtAws {
namespace AppSync {

class AppSyncRequest;

class QTAWS_EXPORT AppSyncRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    AppSyncRequest::Action action; ///< AppSync action to be performed.
    QString apiVersion;        ///< AppSync API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< AppSync request (query string) parameters. @todo?

    AppSyncRequestPrivate(const AppSyncRequest::Action action, AppSyncRequest * const q);
    AppSyncRequestPrivate(const AppSyncRequestPrivate &other, AppSyncRequest * const q);

    static QString toString(const AppSyncRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(AppSyncRequest)

};

} // namespace AppSync
} // namespace QtAws

#endif
