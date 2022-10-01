// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTOBJECTVERSIONSRESPONSE_H
#define QTAWS_LISTOBJECTVERSIONSRESPONSE_H

#include "s3response.h"
#include "listobjectversionsrequest.h"

namespace QtAws {
namespace S3 {

class ListObjectVersionsResponsePrivate;

class QTAWSS3_EXPORT ListObjectVersionsResponse : public S3Response {
    Q_OBJECT

public:
    ListObjectVersionsResponse(const ListObjectVersionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListObjectVersionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListObjectVersionsResponse)
    Q_DISABLE_COPY(ListObjectVersionsResponse)

};

} // namespace S3
} // namespace QtAws

#endif
