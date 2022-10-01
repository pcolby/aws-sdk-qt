// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEUPLOADBUFFERRESPONSE_H
#define QTAWS_DESCRIBEUPLOADBUFFERRESPONSE_H

#include "storagegatewayresponse.h"
#include "describeuploadbufferrequest.h"

namespace QtAws {
namespace StorageGateway {

class DescribeUploadBufferResponsePrivate;

class QTAWSSTORAGEGATEWAY_EXPORT DescribeUploadBufferResponse : public StorageGatewayResponse {
    Q_OBJECT

public:
    DescribeUploadBufferResponse(const DescribeUploadBufferRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeUploadBufferRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeUploadBufferResponse)
    Q_DISABLE_COPY(DescribeUploadBufferResponse)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
