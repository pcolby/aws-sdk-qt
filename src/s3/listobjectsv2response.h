// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTOBJECTSV2RESPONSE_H
#define QTAWS_LISTOBJECTSV2RESPONSE_H

#include "s3response.h"
#include "listobjectsv2request.h"

namespace QtAws {
namespace S3 {

class ListObjectsV2ResponsePrivate;

class QTAWSS3_EXPORT ListObjectsV2Response : public S3Response {
    Q_OBJECT

public:
    ListObjectsV2Response(const ListObjectsV2Request &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListObjectsV2Request * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListObjectsV2Response)
    Q_DISABLE_COPY(ListObjectsV2Response)

};

} // namespace S3
} // namespace QtAws

#endif
