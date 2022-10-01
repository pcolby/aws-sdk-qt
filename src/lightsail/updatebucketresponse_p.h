// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBUCKETRESPONSE_P_H
#define QTAWS_UPDATEBUCKETRESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class UpdateBucketResponse;

class UpdateBucketResponsePrivate : public LightsailResponsePrivate {

public:

    explicit UpdateBucketResponsePrivate(UpdateBucketResponse * const q);

    void parseUpdateBucketResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateBucketResponse)
    Q_DISABLE_COPY(UpdateBucketResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
