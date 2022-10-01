// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEOBJECTTAGGINGRESPONSE_H
#define QTAWS_DELETEOBJECTTAGGINGRESPONSE_H

#include "s3response.h"
#include "deleteobjecttaggingrequest.h"

namespace QtAws {
namespace S3 {

class DeleteObjectTaggingResponsePrivate;

class QTAWSS3_EXPORT DeleteObjectTaggingResponse : public S3Response {
    Q_OBJECT

public:
    DeleteObjectTaggingResponse(const DeleteObjectTaggingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteObjectTaggingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteObjectTaggingResponse)
    Q_DISABLE_COPY(DeleteObjectTaggingResponse)

};

} // namespace S3
} // namespace QtAws

#endif
