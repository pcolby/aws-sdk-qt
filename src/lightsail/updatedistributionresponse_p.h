// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDISTRIBUTIONRESPONSE_P_H
#define QTAWS_UPDATEDISTRIBUTIONRESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class UpdateDistributionResponse;

class UpdateDistributionResponsePrivate : public LightsailResponsePrivate {

public:

    explicit UpdateDistributionResponsePrivate(UpdateDistributionResponse * const q);

    void parseUpdateDistributionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateDistributionResponse)
    Q_DISABLE_COPY(UpdateDistributionResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
