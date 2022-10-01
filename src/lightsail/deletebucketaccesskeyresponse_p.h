// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBUCKETACCESSKEYRESPONSE_P_H
#define QTAWS_DELETEBUCKETACCESSKEYRESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class DeleteBucketAccessKeyResponse;

class DeleteBucketAccessKeyResponsePrivate : public LightsailResponsePrivate {

public:

    explicit DeleteBucketAccessKeyResponsePrivate(DeleteBucketAccessKeyResponse * const q);

    void parseDeleteBucketAccessKeyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteBucketAccessKeyResponse)
    Q_DISABLE_COPY(DeleteBucketAccessKeyResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
