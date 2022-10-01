// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMONITORINGSCHEDULESRESPONSE_H
#define QTAWS_LISTMONITORINGSCHEDULESRESPONSE_H

#include "sagemakerresponse.h"
#include "listmonitoringschedulesrequest.h"

namespace QtAws {
namespace SageMaker {

class ListMonitoringSchedulesResponsePrivate;

class QTAWSSAGEMAKER_EXPORT ListMonitoringSchedulesResponse : public SageMakerResponse {
    Q_OBJECT

public:
    ListMonitoringSchedulesResponse(const ListMonitoringSchedulesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListMonitoringSchedulesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListMonitoringSchedulesResponse)
    Q_DISABLE_COPY(ListMonitoringSchedulesResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
