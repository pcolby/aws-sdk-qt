// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBUCKETRESPONSE_H
#define QTAWS_DELETEBUCKETRESPONSE_H

#include "s3controlresponse.h"
#include "deletebucketrequest.h"

namespace QtAws {
namespace S3Control {

class DeleteBucketResponsePrivate;

class QTAWSS3CONTROL_EXPORT DeleteBucketResponse : public S3ControlResponse {
    Q_OBJECT

public:
    DeleteBucketResponse(const DeleteBucketRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteBucketRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteBucketResponse)
    Q_DISABLE_COPY(DeleteBucketResponse)

};

} // namespace S3Control
} // namespace QtAws

#endif
