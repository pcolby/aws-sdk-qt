// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEOTAUPDATERESPONSE_H
#define QTAWS_CREATEOTAUPDATERESPONSE_H

#include "iotresponse.h"
#include "createotaupdaterequest.h"

namespace QtAws {
namespace IoT {

class CreateOTAUpdateResponsePrivate;

class QTAWSIOT_EXPORT CreateOTAUpdateResponse : public IoTResponse {
    Q_OBJECT

public:
    CreateOTAUpdateResponse(const CreateOTAUpdateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateOTAUpdateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateOTAUpdateResponse)
    Q_DISABLE_COPY(CreateOTAUpdateResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
