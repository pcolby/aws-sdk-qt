// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESERVATIONUTILIZATIONRESPONSE_H
#define QTAWS_GETRESERVATIONUTILIZATIONRESPONSE_H

#include "costexplorerresponse.h"
#include "getreservationutilizationrequest.h"

namespace QtAws {
namespace CostExplorer {

class GetReservationUtilizationResponsePrivate;

class QTAWSCOSTEXPLORER_EXPORT GetReservationUtilizationResponse : public CostExplorerResponse {
    Q_OBJECT

public:
    GetReservationUtilizationResponse(const GetReservationUtilizationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetReservationUtilizationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetReservationUtilizationResponse)
    Q_DISABLE_COPY(GetReservationUtilizationResponse)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
