// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBUCKETACCESSKEYRESPONSE_H
#define QTAWS_CREATEBUCKETACCESSKEYRESPONSE_H

#include "lightsailresponse.h"
#include "createbucketaccesskeyrequest.h"

namespace QtAws {
namespace Lightsail {

class CreateBucketAccessKeyResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT CreateBucketAccessKeyResponse : public LightsailResponse {
    Q_OBJECT

public:
    CreateBucketAccessKeyResponse(const CreateBucketAccessKeyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateBucketAccessKeyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateBucketAccessKeyResponse)
    Q_DISABLE_COPY(CreateBucketAccessKeyResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
