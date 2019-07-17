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

#ifndef QTAWS_DATASYNCREQUEST_P_H
#define QTAWS_DATASYNCREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "datasyncrequest.h"

namespace QtAws {
namespace DataSync {

class DataSyncRequest;

class QTAWS_EXPORT DataSyncRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    DataSyncRequest::Action action; ///< DataSync action to be performed.
    QString apiVersion;        ///< DataSync API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< DataSync request (query string) parameters. @todo?

    DataSyncRequestPrivate(const DataSyncRequest::Action action, DataSyncRequest * const q);
    DataSyncRequestPrivate(const DataSyncRequestPrivate &other, DataSyncRequest * const q);

    static QString toString(const DataSyncRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(DataSyncRequest)

};

} // namespace DataSync
} // namespace QtAws

#endif
