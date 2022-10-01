// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATASOURCESYNCJOBSREQUEST_H
#define QTAWS_LISTDATASOURCESYNCJOBSREQUEST_H

#include "kendrarequest.h"

namespace QtAws {
namespace Kendra {

class ListDataSourceSyncJobsRequestPrivate;

class QTAWSKENDRA_EXPORT ListDataSourceSyncJobsRequest : public KendraRequest {

public:
    ListDataSourceSyncJobsRequest(const ListDataSourceSyncJobsRequest &other);
    ListDataSourceSyncJobsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDataSourceSyncJobsRequest)

};

} // namespace Kendra
} // namespace QtAws

#endif
