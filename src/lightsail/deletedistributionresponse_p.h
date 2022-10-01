// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDISTRIBUTIONRESPONSE_P_H
#define QTAWS_DELETEDISTRIBUTIONRESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class DeleteDistributionResponse;

class DeleteDistributionResponsePrivate : public LightsailResponsePrivate {

public:

    explicit DeleteDistributionResponsePrivate(DeleteDistributionResponse * const q);

    void parseDeleteDistributionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteDistributionResponse)
    Q_DISABLE_COPY(DeleteDistributionResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
