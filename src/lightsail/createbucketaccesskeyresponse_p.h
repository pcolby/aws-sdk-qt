// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBUCKETACCESSKEYRESPONSE_P_H
#define QTAWS_CREATEBUCKETACCESSKEYRESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class CreateBucketAccessKeyResponse;

class CreateBucketAccessKeyResponsePrivate : public LightsailResponsePrivate {

public:

    explicit CreateBucketAccessKeyResponsePrivate(CreateBucketAccessKeyResponse * const q);

    void parseCreateBucketAccessKeyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateBucketAccessKeyResponse)
    Q_DISABLE_COPY(CreateBucketAccessKeyResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
