// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUCKETACCESSKEYSRESPONSE_H
#define QTAWS_GETBUCKETACCESSKEYSRESPONSE_H

#include "lightsailresponse.h"
#include "getbucketaccesskeysrequest.h"

namespace QtAws {
namespace Lightsail {

class GetBucketAccessKeysResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT GetBucketAccessKeysResponse : public LightsailResponse {
    Q_OBJECT

public:
    GetBucketAccessKeysResponse(const GetBucketAccessKeysRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetBucketAccessKeysRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBucketAccessKeysResponse)
    Q_DISABLE_COPY(GetBucketAccessKeysResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
