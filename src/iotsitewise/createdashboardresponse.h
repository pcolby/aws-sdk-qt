// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDASHBOARDRESPONSE_H
#define QTAWS_CREATEDASHBOARDRESPONSE_H

#include "iotsitewiseresponse.h"
#include "createdashboardrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class CreateDashboardResponsePrivate;

class QTAWSIOTSITEWISE_EXPORT CreateDashboardResponse : public IoTSiteWiseResponse {
    Q_OBJECT

public:
    CreateDashboardResponse(const CreateDashboardRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateDashboardRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDashboardResponse)
    Q_DISABLE_COPY(CreateDashboardResponse)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
