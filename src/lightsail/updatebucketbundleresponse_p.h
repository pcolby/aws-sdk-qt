// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBUCKETBUNDLERESPONSE_P_H
#define QTAWS_UPDATEBUCKETBUNDLERESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class UpdateBucketBundleResponse;

class UpdateBucketBundleResponsePrivate : public LightsailResponsePrivate {

public:

    explicit UpdateBucketBundleResponsePrivate(UpdateBucketBundleResponse * const q);

    void parseUpdateBucketBundleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateBucketBundleResponse)
    Q_DISABLE_COPY(UpdateBucketBundleResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
