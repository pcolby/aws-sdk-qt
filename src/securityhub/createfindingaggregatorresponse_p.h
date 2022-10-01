// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFINDINGAGGREGATORRESPONSE_P_H
#define QTAWS_CREATEFINDINGAGGREGATORRESPONSE_P_H

#include "securityhubresponse_p.h"

namespace QtAws {
namespace SecurityHub {

class CreateFindingAggregatorResponse;

class CreateFindingAggregatorResponsePrivate : public SecurityHubResponsePrivate {

public:

    explicit CreateFindingAggregatorResponsePrivate(CreateFindingAggregatorResponse * const q);

    void parseCreateFindingAggregatorResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateFindingAggregatorResponse)
    Q_DISABLE_COPY(CreateFindingAggregatorResponsePrivate)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
