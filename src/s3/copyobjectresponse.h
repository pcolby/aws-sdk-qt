// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COPYOBJECTRESPONSE_H
#define QTAWS_COPYOBJECTRESPONSE_H

#include "s3response.h"
#include "copyobjectrequest.h"

namespace QtAws {
namespace S3 {

class CopyObjectResponsePrivate;

class QTAWSS3_EXPORT CopyObjectResponse : public S3Response {
    Q_OBJECT

public:
    CopyObjectResponse(const CopyObjectRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CopyObjectRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CopyObjectResponse)
    Q_DISABLE_COPY(CopyObjectResponse)

};

} // namespace S3
} // namespace QtAws

#endif
