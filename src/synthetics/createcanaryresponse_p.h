// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECANARYRESPONSE_P_H
#define QTAWS_CREATECANARYRESPONSE_P_H

#include "syntheticsresponse_p.h"

namespace QtAws {
namespace Synthetics {

class CreateCanaryResponse;

class CreateCanaryResponsePrivate : public SyntheticsResponsePrivate {

public:

    explicit CreateCanaryResponsePrivate(CreateCanaryResponse * const q);

    void parseCreateCanaryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateCanaryResponse)
    Q_DISABLE_COPY(CreateCanaryResponsePrivate)

};

} // namespace Synthetics
} // namespace QtAws

#endif
