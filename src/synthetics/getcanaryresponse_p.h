// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCANARYRESPONSE_P_H
#define QTAWS_GETCANARYRESPONSE_P_H

#include "syntheticsresponse_p.h"

namespace QtAws {
namespace Synthetics {

class GetCanaryResponse;

class GetCanaryResponsePrivate : public SyntheticsResponsePrivate {

public:

    explicit GetCanaryResponsePrivate(GetCanaryResponse * const q);

    void parseGetCanaryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetCanaryResponse)
    Q_DISABLE_COPY(GetCanaryResponsePrivate)

};

} // namespace Synthetics
} // namespace QtAws

#endif
