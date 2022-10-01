// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDIMENSIONKEYDETAILSRESPONSE_P_H
#define QTAWS_GETDIMENSIONKEYDETAILSRESPONSE_P_H

#include "piresponse_p.h"

namespace QtAws {
namespace Pi {

class GetDimensionKeyDetailsResponse;

class GetDimensionKeyDetailsResponsePrivate : public PiResponsePrivate {

public:

    explicit GetDimensionKeyDetailsResponsePrivate(GetDimensionKeyDetailsResponse * const q);

    void parseGetDimensionKeyDetailsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDimensionKeyDetailsResponse)
    Q_DISABLE_COPY(GetDimensionKeyDetailsResponsePrivate)

};

} // namespace Pi
} // namespace QtAws

#endif
