// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTOBJECTSRESPONSE_H
#define QTAWS_LISTOBJECTSRESPONSE_H

#include "s3response.h"
#include "listobjectsrequest.h"

namespace QtAws {
namespace S3 {

class ListObjectsResponsePrivate;

class QTAWSS3_EXPORT ListObjectsResponse : public S3Response {
    Q_OBJECT

public:
    ListObjectsResponse(const ListObjectsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListObjectsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListObjectsResponse)
    Q_DISABLE_COPY(ListObjectsResponse)

};

} // namespace S3
} // namespace QtAws

#endif
