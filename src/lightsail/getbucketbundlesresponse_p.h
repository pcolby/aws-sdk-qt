// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUCKETBUNDLESRESPONSE_P_H
#define QTAWS_GETBUCKETBUNDLESRESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class GetBucketBundlesResponse;

class GetBucketBundlesResponsePrivate : public LightsailResponsePrivate {

public:

    explicit GetBucketBundlesResponsePrivate(GetBucketBundlesResponse * const q);

    void parseGetBucketBundlesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetBucketBundlesResponse)
    Q_DISABLE_COPY(GetBucketBundlesResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
