// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBUCKETTAGGINGRESPONSE_H
#define QTAWS_DELETEBUCKETTAGGINGRESPONSE_H

#include "s3controlresponse.h"
#include "deletebuckettaggingrequest.h"

namespace QtAws {
namespace S3Control {

class DeleteBucketTaggingResponsePrivate;

class QTAWSS3CONTROL_EXPORT DeleteBucketTaggingResponse : public S3ControlResponse {
    Q_OBJECT

public:
    DeleteBucketTaggingResponse(const DeleteBucketTaggingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteBucketTaggingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteBucketTaggingResponse)
    Q_DISABLE_COPY(DeleteBucketTaggingResponse)

};

} // namespace S3Control
} // namespace QtAws

#endif
