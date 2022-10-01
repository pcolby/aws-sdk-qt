// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELAGSRESPONSE_P_H
#define QTAWS_DESCRIBELAGSRESPONSE_P_H

#include "directconnectresponse_p.h"

namespace QtAws {
namespace DirectConnect {

class DescribeLagsResponse;

class DescribeLagsResponsePrivate : public DirectConnectResponsePrivate {

public:

    explicit DescribeLagsResponsePrivate(DescribeLagsResponse * const q);

    void parseDescribeLagsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeLagsResponse)
    Q_DISABLE_COPY(DescribeLagsResponsePrivate)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
