// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTOBJECTTAGGINGRESPONSE_H
#define QTAWS_PUTOBJECTTAGGINGRESPONSE_H

#include "s3response.h"
#include "putobjecttaggingrequest.h"

namespace QtAws {
namespace S3 {

class PutObjectTaggingResponsePrivate;

class QTAWSS3_EXPORT PutObjectTaggingResponse : public S3Response {
    Q_OBJECT

public:
    PutObjectTaggingResponse(const PutObjectTaggingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutObjectTaggingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutObjectTaggingResponse)
    Q_DISABLE_COPY(PutObjectTaggingResponse)

};

} // namespace S3
} // namespace QtAws

#endif
