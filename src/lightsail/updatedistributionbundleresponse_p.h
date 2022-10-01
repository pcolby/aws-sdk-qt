// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDISTRIBUTIONBUNDLERESPONSE_P_H
#define QTAWS_UPDATEDISTRIBUTIONBUNDLERESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class UpdateDistributionBundleResponse;

class UpdateDistributionBundleResponsePrivate : public LightsailResponsePrivate {

public:

    explicit UpdateDistributionBundleResponsePrivate(UpdateDistributionBundleResponse * const q);

    void parseUpdateDistributionBundleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateDistributionBundleResponse)
    Q_DISABLE_COPY(UpdateDistributionBundleResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
