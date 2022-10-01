// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMINUTEUSAGERESPONSE_H
#define QTAWS_GETMINUTEUSAGERESPONSE_H

#include "groundstationresponse.h"
#include "getminuteusagerequest.h"

namespace QtAws {
namespace GroundStation {

class GetMinuteUsageResponsePrivate;

class QTAWSGROUNDSTATION_EXPORT GetMinuteUsageResponse : public GroundStationResponse {
    Q_OBJECT

public:
    GetMinuteUsageResponse(const GetMinuteUsageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetMinuteUsageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMinuteUsageResponse)
    Q_DISABLE_COPY(GetMinuteUsageResponse)

};

} // namespace GroundStation
} // namespace QtAws

#endif
