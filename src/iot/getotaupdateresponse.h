// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETOTAUPDATERESPONSE_H
#define QTAWS_GETOTAUPDATERESPONSE_H

#include "iotresponse.h"
#include "getotaupdaterequest.h"

namespace QtAws {
namespace IoT {

class GetOTAUpdateResponsePrivate;

class QTAWSIOT_EXPORT GetOTAUpdateResponse : public IoTResponse {
    Q_OBJECT

public:
    GetOTAUpdateResponse(const GetOTAUpdateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetOTAUpdateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetOTAUpdateResponse)
    Q_DISABLE_COPY(GetOTAUpdateResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
