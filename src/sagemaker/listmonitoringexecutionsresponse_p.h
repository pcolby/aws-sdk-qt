// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMONITORINGEXECUTIONSRESPONSE_P_H
#define QTAWS_LISTMONITORINGEXECUTIONSRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class ListMonitoringExecutionsResponse;

class ListMonitoringExecutionsResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit ListMonitoringExecutionsResponsePrivate(ListMonitoringExecutionsResponse * const q);

    void parseListMonitoringExecutionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListMonitoringExecutionsResponse)
    Q_DISABLE_COPY(ListMonitoringExecutionsResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
