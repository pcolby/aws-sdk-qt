// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETOBJECTRESPONSE_H
#define QTAWS_GETOBJECTRESPONSE_H

#include "s3response.h"
#include "getobjectrequest.h"

namespace QtAws {
namespace S3 {

class GetObjectResponsePrivate;

class QTAWSS3_EXPORT GetObjectResponse : public S3Response {
    Q_OBJECT

public:
    GetObjectResponse(const GetObjectRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetObjectRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetObjectResponse)
    Q_DISABLE_COPY(GetObjectResponse)

};

} // namespace S3
} // namespace QtAws

#endif
