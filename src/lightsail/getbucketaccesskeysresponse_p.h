// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUCKETACCESSKEYSRESPONSE_P_H
#define QTAWS_GETBUCKETACCESSKEYSRESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class GetBucketAccessKeysResponse;

class GetBucketAccessKeysResponsePrivate : public LightsailResponsePrivate {

public:

    explicit GetBucketAccessKeysResponsePrivate(GetBucketAccessKeysResponse * const q);

    void parseGetBucketAccessKeysResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetBucketAccessKeysResponse)
    Q_DISABLE_COPY(GetBucketAccessKeysResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
