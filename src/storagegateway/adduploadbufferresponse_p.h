// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDUPLOADBUFFERRESPONSE_P_H
#define QTAWS_ADDUPLOADBUFFERRESPONSE_P_H

#include "storagegatewayresponse_p.h"

namespace QtAws {
namespace StorageGateway {

class AddUploadBufferResponse;

class AddUploadBufferResponsePrivate : public StorageGatewayResponsePrivate {

public:

    explicit AddUploadBufferResponsePrivate(AddUploadBufferResponse * const q);

    void parseAddUploadBufferResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AddUploadBufferResponse)
    Q_DISABLE_COPY(AddUploadBufferResponsePrivate)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
