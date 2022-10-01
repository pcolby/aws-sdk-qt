// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETOFFERINGSTATUSRESPONSE_H
#define QTAWS_GETOFFERINGSTATUSRESPONSE_H

#include "devicefarmresponse.h"
#include "getofferingstatusrequest.h"

namespace QtAws {
namespace DeviceFarm {

class GetOfferingStatusResponsePrivate;

class QTAWSDEVICEFARM_EXPORT GetOfferingStatusResponse : public DeviceFarmResponse {
    Q_OBJECT

public:
    GetOfferingStatusResponse(const GetOfferingStatusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetOfferingStatusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetOfferingStatusResponse)
    Q_DISABLE_COPY(GetOfferingStatusResponse)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
