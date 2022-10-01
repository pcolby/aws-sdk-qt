// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DATASYNCREQUEST_P_H
#define QTAWS_DATASYNCREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "datasyncrequest.h"

namespace QtAws {
namespace DataSync {

class DataSyncRequest;

class DataSyncRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

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
