// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFINDINGAGGREGATORRESPONSE_P_H
#define QTAWS_UPDATEFINDINGAGGREGATORRESPONSE_P_H

#include "securityhubresponse_p.h"

namespace QtAws {
namespace SecurityHub {

class UpdateFindingAggregatorResponse;

class UpdateFindingAggregatorResponsePrivate : public SecurityHubResponsePrivate {

public:

    explicit UpdateFindingAggregatorResponsePrivate(UpdateFindingAggregatorResponse * const q);

    void parseUpdateFindingAggregatorResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateFindingAggregatorResponse)
    Q_DISABLE_COPY(UpdateFindingAggregatorResponsePrivate)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
