// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFINDINGAGGREGATORRESPONSE_P_H
#define QTAWS_GETFINDINGAGGREGATORRESPONSE_P_H

#include "securityhubresponse_p.h"

namespace QtAws {
namespace SecurityHub {

class GetFindingAggregatorResponse;

class GetFindingAggregatorResponsePrivate : public SecurityHubResponsePrivate {

public:

    explicit GetFindingAggregatorResponsePrivate(GetFindingAggregatorResponse * const q);

    void parseGetFindingAggregatorResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetFindingAggregatorResponse)
    Q_DISABLE_COPY(GetFindingAggregatorResponsePrivate)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
