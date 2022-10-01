// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ISVPCPEEREDRESPONSE_P_H
#define QTAWS_ISVPCPEEREDRESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class IsVpcPeeredResponse;

class IsVpcPeeredResponsePrivate : public LightsailResponsePrivate {

public:

    explicit IsVpcPeeredResponsePrivate(IsVpcPeeredResponse * const q);

    void parseIsVpcPeeredResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(IsVpcPeeredResponse)
    Q_DISABLE_COPY(IsVpcPeeredResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
