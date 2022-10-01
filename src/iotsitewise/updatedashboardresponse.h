// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDASHBOARDRESPONSE_H
#define QTAWS_UPDATEDASHBOARDRESPONSE_H

#include "iotsitewiseresponse.h"
#include "updatedashboardrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class UpdateDashboardResponsePrivate;

class QTAWSIOTSITEWISE_EXPORT UpdateDashboardResponse : public IoTSiteWiseResponse {
    Q_OBJECT

public:
    UpdateDashboardResponse(const UpdateDashboardRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateDashboardRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDashboardResponse)
    Q_DISABLE_COPY(UpdateDashboardResponse)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
