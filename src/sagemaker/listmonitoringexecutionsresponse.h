// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMONITORINGEXECUTIONSRESPONSE_H
#define QTAWS_LISTMONITORINGEXECUTIONSRESPONSE_H

#include "sagemakerresponse.h"
#include "listmonitoringexecutionsrequest.h"

namespace QtAws {
namespace SageMaker {

class ListMonitoringExecutionsResponsePrivate;

class QTAWSSAGEMAKER_EXPORT ListMonitoringExecutionsResponse : public SageMakerResponse {
    Q_OBJECT

public:
    ListMonitoringExecutionsResponse(const ListMonitoringExecutionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListMonitoringExecutionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListMonitoringExecutionsResponse)
    Q_DISABLE_COPY(ListMonitoringExecutionsResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
