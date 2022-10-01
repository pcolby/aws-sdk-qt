// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEUPLOADBUFFERRESPONSE_P_H
#define QTAWS_DESCRIBEUPLOADBUFFERRESPONSE_P_H

#include "storagegatewayresponse_p.h"

namespace QtAws {
namespace StorageGateway {

class DescribeUploadBufferResponse;

class DescribeUploadBufferResponsePrivate : public StorageGatewayResponsePrivate {

public:

    explicit DescribeUploadBufferResponsePrivate(DescribeUploadBufferResponse * const q);

    void parseDescribeUploadBufferResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeUploadBufferResponse)
    Q_DISABLE_COPY(DescribeUploadBufferResponsePrivate)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
