// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETOBJECTLEGALHOLDRESPONSE_H
#define QTAWS_GETOBJECTLEGALHOLDRESPONSE_H

#include "s3response.h"
#include "getobjectlegalholdrequest.h"

namespace QtAws {
namespace S3 {

class GetObjectLegalHoldResponsePrivate;

class QTAWSS3_EXPORT GetObjectLegalHoldResponse : public S3Response {
    Q_OBJECT

public:
    GetObjectLegalHoldResponse(const GetObjectLegalHoldRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetObjectLegalHoldRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetObjectLegalHoldResponse)
    Q_DISABLE_COPY(GetObjectLegalHoldResponse)

};

} // namespace S3
} // namespace QtAws

#endif
