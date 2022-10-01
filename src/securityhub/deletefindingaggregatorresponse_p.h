// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFINDINGAGGREGATORRESPONSE_P_H
#define QTAWS_DELETEFINDINGAGGREGATORRESPONSE_P_H

#include "securityhubresponse_p.h"

namespace QtAws {
namespace SecurityHub {

class DeleteFindingAggregatorResponse;

class DeleteFindingAggregatorResponsePrivate : public SecurityHubResponsePrivate {

public:

    explicit DeleteFindingAggregatorResponsePrivate(DeleteFindingAggregatorResponse * const q);

    void parseDeleteFindingAggregatorResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteFindingAggregatorResponse)
    Q_DISABLE_COPY(DeleteFindingAggregatorResponsePrivate)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
