// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDIMENSIONVALUESRESPONSE_P_H
#define QTAWS_GETDIMENSIONVALUESRESPONSE_P_H

#include "costexplorerresponse_p.h"

namespace QtAws {
namespace CostExplorer {

class GetDimensionValuesResponse;

class GetDimensionValuesResponsePrivate : public CostExplorerResponsePrivate {

public:

    explicit GetDimensionValuesResponsePrivate(GetDimensionValuesResponse * const q);

    void parseGetDimensionValuesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDimensionValuesResponse)
    Q_DISABLE_COPY(GetDimensionValuesResponsePrivate)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
