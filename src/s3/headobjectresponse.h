// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_HEADOBJECTRESPONSE_H
#define QTAWS_HEADOBJECTRESPONSE_H

#include "s3response.h"
#include "headobjectrequest.h"

namespace QtAws {
namespace S3 {

class HeadObjectResponsePrivate;

class QTAWSS3_EXPORT HeadObjectResponse : public S3Response {
    Q_OBJECT

public:
    HeadObjectResponse(const HeadObjectRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const HeadObjectRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(HeadObjectResponse)
    Q_DISABLE_COPY(HeadObjectResponse)

};

} // namespace S3
} // namespace QtAws

#endif
