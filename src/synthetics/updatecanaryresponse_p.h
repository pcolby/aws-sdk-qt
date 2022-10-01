// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECANARYRESPONSE_P_H
#define QTAWS_UPDATECANARYRESPONSE_P_H

#include "syntheticsresponse_p.h"

namespace QtAws {
namespace Synthetics {

class UpdateCanaryResponse;

class UpdateCanaryResponsePrivate : public SyntheticsResponsePrivate {

public:

    explicit UpdateCanaryResponsePrivate(UpdateCanaryResponse * const q);

    void parseUpdateCanaryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateCanaryResponse)
    Q_DISABLE_COPY(UpdateCanaryResponsePrivate)

};

} // namespace Synthetics
} // namespace QtAws

#endif
