// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEOBJECTSRESPONSE_H
#define QTAWS_DELETEOBJECTSRESPONSE_H

#include "s3response.h"
#include "deleteobjectsrequest.h"

namespace QtAws {
namespace S3 {

class DeleteObjectsResponsePrivate;

class QTAWSS3_EXPORT DeleteObjectsResponse : public S3Response {
    Q_OBJECT

public:
    DeleteObjectsResponse(const DeleteObjectsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteObjectsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteObjectsResponse)
    Q_DISABLE_COPY(DeleteObjectsResponse)

};

} // namespace S3
} // namespace QtAws

#endif
