// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTOBJECTRETENTIONRESPONSE_H
#define QTAWS_PUTOBJECTRETENTIONRESPONSE_H

#include "s3response.h"
#include "putobjectretentionrequest.h"

namespace QtAws {
namespace S3 {

class PutObjectRetentionResponsePrivate;

class QTAWSS3_EXPORT PutObjectRetentionResponse : public S3Response {
    Q_OBJECT

public:
    PutObjectRetentionResponse(const PutObjectRetentionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutObjectRetentionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutObjectRetentionResponse)
    Q_DISABLE_COPY(PutObjectRetentionResponse)

};

} // namespace S3
} // namespace QtAws

#endif
