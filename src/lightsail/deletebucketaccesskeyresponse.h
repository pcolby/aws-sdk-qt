// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBUCKETACCESSKEYRESPONSE_H
#define QTAWS_DELETEBUCKETACCESSKEYRESPONSE_H

#include "lightsailresponse.h"
#include "deletebucketaccesskeyrequest.h"

namespace QtAws {
namespace Lightsail {

class DeleteBucketAccessKeyResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT DeleteBucketAccessKeyResponse : public LightsailResponse {
    Q_OBJECT

public:
    DeleteBucketAccessKeyResponse(const DeleteBucketAccessKeyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteBucketAccessKeyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteBucketAccessKeyResponse)
    Q_DISABLE_COPY(DeleteBucketAccessKeyResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
