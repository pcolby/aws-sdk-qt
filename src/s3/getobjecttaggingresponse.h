// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETOBJECTTAGGINGRESPONSE_H
#define QTAWS_GETOBJECTTAGGINGRESPONSE_H

#include "s3response.h"
#include "getobjecttaggingrequest.h"

namespace QtAws {
namespace S3 {

class GetObjectTaggingResponsePrivate;

class QTAWSS3_EXPORT GetObjectTaggingResponse : public S3Response {
    Q_OBJECT

public:
    GetObjectTaggingResponse(const GetObjectTaggingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetObjectTaggingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetObjectTaggingResponse)
    Q_DISABLE_COPY(GetObjectTaggingResponse)

};

} // namespace S3
} // namespace QtAws

#endif
