// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPUBLICACCESSBLOCKRESPONSE_H
#define QTAWS_GETPUBLICACCESSBLOCKRESPONSE_H

#include "s3controlresponse.h"
#include "getpublicaccessblockrequest.h"

namespace QtAws {
namespace S3Control {

class GetPublicAccessBlockResponsePrivate;

class QTAWSS3CONTROL_EXPORT GetPublicAccessBlockResponse : public S3ControlResponse {
    Q_OBJECT

public:
    GetPublicAccessBlockResponse(const GetPublicAccessBlockRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetPublicAccessBlockRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetPublicAccessBlockResponse)
    Q_DISABLE_COPY(GetPublicAccessBlockResponse)

};

} // namespace S3Control
} // namespace QtAws

#endif
