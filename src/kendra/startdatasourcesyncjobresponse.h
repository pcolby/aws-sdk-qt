// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTDATASOURCESYNCJOBRESPONSE_H
#define QTAWS_STARTDATASOURCESYNCJOBRESPONSE_H

#include "kendraresponse.h"
#include "startdatasourcesyncjobrequest.h"

namespace QtAws {
namespace Kendra {

class StartDataSourceSyncJobResponsePrivate;

class QTAWSKENDRA_EXPORT StartDataSourceSyncJobResponse : public KendraResponse {
    Q_OBJECT

public:
    StartDataSourceSyncJobResponse(const StartDataSourceSyncJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartDataSourceSyncJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartDataSourceSyncJobResponse)
    Q_DISABLE_COPY(StartDataSourceSyncJobResponse)

};

} // namespace Kendra
} // namespace QtAws

#endif
