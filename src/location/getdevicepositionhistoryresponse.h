// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEVICEPOSITIONHISTORYRESPONSE_H
#define QTAWS_GETDEVICEPOSITIONHISTORYRESPONSE_H

#include "locationresponse.h"
#include "getdevicepositionhistoryrequest.h"

namespace QtAws {
namespace Location {

class GetDevicePositionHistoryResponsePrivate;

class QTAWSLOCATION_EXPORT GetDevicePositionHistoryResponse : public LocationResponse {
    Q_OBJECT

public:
    GetDevicePositionHistoryResponse(const GetDevicePositionHistoryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetDevicePositionHistoryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDevicePositionHistoryResponse)
    Q_DISABLE_COPY(GetDevicePositionHistoryResponse)

};

} // namespace Location
} // namespace QtAws

#endif
