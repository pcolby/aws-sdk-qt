// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPUBLICACCESSBLOCKRESPONSE_H
#define QTAWS_DELETEPUBLICACCESSBLOCKRESPONSE_H

#include "s3controlresponse.h"
#include "deletepublicaccessblockrequest.h"

namespace QtAws {
namespace S3Control {

class DeletePublicAccessBlockResponsePrivate;

class QTAWSS3CONTROL_EXPORT DeletePublicAccessBlockResponse : public S3ControlResponse {
    Q_OBJECT

public:
    DeletePublicAccessBlockResponse(const DeletePublicAccessBlockRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeletePublicAccessBlockRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeletePublicAccessBlockResponse)
    Q_DISABLE_COPY(DeletePublicAccessBlockResponse)

};

} // namespace S3Control
} // namespace QtAws

#endif
