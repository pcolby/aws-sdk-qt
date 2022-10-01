// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTOBJECTLEGALHOLDRESPONSE_H
#define QTAWS_PUTOBJECTLEGALHOLDRESPONSE_H

#include "s3response.h"
#include "putobjectlegalholdrequest.h"

namespace QtAws {
namespace S3 {

class PutObjectLegalHoldResponsePrivate;

class QTAWSS3_EXPORT PutObjectLegalHoldResponse : public S3Response {
    Q_OBJECT

public:
    PutObjectLegalHoldResponse(const PutObjectLegalHoldRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutObjectLegalHoldRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutObjectLegalHoldResponse)
    Q_DISABLE_COPY(PutObjectLegalHoldResponse)

};

} // namespace S3
} // namespace QtAws

#endif
