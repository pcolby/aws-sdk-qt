// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPDATASOURCESYNCJOBRESPONSE_H
#define QTAWS_STOPDATASOURCESYNCJOBRESPONSE_H

#include "kendraresponse.h"
#include "stopdatasourcesyncjobrequest.h"

namespace QtAws {
namespace Kendra {

class StopDataSourceSyncJobResponsePrivate;

class QTAWSKENDRA_EXPORT StopDataSourceSyncJobResponse : public KendraResponse {
    Q_OBJECT

public:
    StopDataSourceSyncJobResponse(const StopDataSourceSyncJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopDataSourceSyncJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopDataSourceSyncJobResponse)
    Q_DISABLE_COPY(StopDataSourceSyncJobResponse)

};

} // namespace Kendra
} // namespace QtAws

#endif
