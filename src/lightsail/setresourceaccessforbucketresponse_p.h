// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETRESOURCEACCESSFORBUCKETRESPONSE_P_H
#define QTAWS_SETRESOURCEACCESSFORBUCKETRESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class SetResourceAccessForBucketResponse;

class SetResourceAccessForBucketResponsePrivate : public LightsailResponsePrivate {

public:

    explicit SetResourceAccessForBucketResponsePrivate(SetResourceAccessForBucketResponse * const q);

    void parseSetResourceAccessForBucketResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SetResourceAccessForBucketResponse)
    Q_DISABLE_COPY(SetResourceAccessForBucketResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
