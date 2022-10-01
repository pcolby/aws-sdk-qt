// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETANOMALYGROUPRESPONSE_H
#define QTAWS_GETANOMALYGROUPRESPONSE_H

#include "lookoutmetricsresponse.h"
#include "getanomalygrouprequest.h"

namespace QtAws {
namespace LookoutMetrics {

class GetAnomalyGroupResponsePrivate;

class QTAWSLOOKOUTMETRICS_EXPORT GetAnomalyGroupResponse : public LookoutMetricsResponse {
    Q_OBJECT

public:
    GetAnomalyGroupResponse(const GetAnomalyGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetAnomalyGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAnomalyGroupResponse)
    Q_DISABLE_COPY(GetAnomalyGroupResponse)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif
