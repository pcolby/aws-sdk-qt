// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDUPLOADBUFFERRESPONSE_H
#define QTAWS_ADDUPLOADBUFFERRESPONSE_H

#include "storagegatewayresponse.h"
#include "adduploadbufferrequest.h"

namespace QtAws {
namespace StorageGateway {

class AddUploadBufferResponsePrivate;

class QTAWSSTORAGEGATEWAY_EXPORT AddUploadBufferResponse : public StorageGatewayResponse {
    Q_OBJECT

public:
    AddUploadBufferResponse(const AddUploadBufferRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AddUploadBufferRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AddUploadBufferResponse)
    Q_DISABLE_COPY(AddUploadBufferResponse)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
