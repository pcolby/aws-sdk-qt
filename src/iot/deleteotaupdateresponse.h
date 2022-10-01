// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEOTAUPDATERESPONSE_H
#define QTAWS_DELETEOTAUPDATERESPONSE_H

#include "iotresponse.h"
#include "deleteotaupdaterequest.h"

namespace QtAws {
namespace IoT {

class DeleteOTAUpdateResponsePrivate;

class QTAWSIOT_EXPORT DeleteOTAUpdateResponse : public IoTResponse {
    Q_OBJECT

public:
    DeleteOTAUpdateResponse(const DeleteOTAUpdateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteOTAUpdateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteOTAUpdateResponse)
    Q_DISABLE_COPY(DeleteOTAUpdateResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
