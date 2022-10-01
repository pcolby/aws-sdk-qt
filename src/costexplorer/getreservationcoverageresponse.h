// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESERVATIONCOVERAGERESPONSE_H
#define QTAWS_GETRESERVATIONCOVERAGERESPONSE_H

#include "costexplorerresponse.h"
#include "getreservationcoveragerequest.h"

namespace QtAws {
namespace CostExplorer {

class GetReservationCoverageResponsePrivate;

class QTAWSCOSTEXPLORER_EXPORT GetReservationCoverageResponse : public CostExplorerResponse {
    Q_OBJECT

public:
    GetReservationCoverageResponse(const GetReservationCoverageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetReservationCoverageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetReservationCoverageResponse)
    Q_DISABLE_COPY(GetReservationCoverageResponse)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
