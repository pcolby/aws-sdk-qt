// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBUCKETSRESPONSE_H
#define QTAWS_LISTBUCKETSRESPONSE_H

#include "s3response.h"
#include "listbucketsrequest.h"

namespace QtAws {
namespace S3 {

class ListBucketsResponsePrivate;

class QTAWSS3_EXPORT ListBucketsResponse : public S3Response {
    Q_OBJECT

public:
    ListBucketsResponse(const ListBucketsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListBucketsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListBucketsResponse)
    Q_DISABLE_COPY(ListBucketsResponse)

};

} // namespace S3
} // namespace QtAws

#endif
