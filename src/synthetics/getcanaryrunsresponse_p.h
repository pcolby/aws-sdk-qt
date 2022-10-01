// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCANARYRUNSRESPONSE_P_H
#define QTAWS_GETCANARYRUNSRESPONSE_P_H

#include "syntheticsresponse_p.h"

namespace QtAws {
namespace Synthetics {

class GetCanaryRunsResponse;

class GetCanaryRunsResponsePrivate : public SyntheticsResponsePrivate {

public:

    explicit GetCanaryRunsResponsePrivate(GetCanaryRunsResponse * const q);

    void parseGetCanaryRunsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetCanaryRunsResponse)
    Q_DISABLE_COPY(GetCanaryRunsResponsePrivate)

};

} // namespace Synthetics
} // namespace QtAws

#endif
