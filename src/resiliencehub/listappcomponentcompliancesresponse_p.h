// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPCOMPONENTCOMPLIANCESRESPONSE_P_H
#define QTAWS_LISTAPPCOMPONENTCOMPLIANCESRESPONSE_P_H

#include "resiliencehubresponse_p.h"

namespace QtAws {
namespace ResilienceHub {

class ListAppComponentCompliancesResponse;

class ListAppComponentCompliancesResponsePrivate : public ResilienceHubResponsePrivate {

public:

    explicit ListAppComponentCompliancesResponsePrivate(ListAppComponentCompliancesResponse * const q);

    void parseListAppComponentCompliancesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAppComponentCompliancesResponse)
    Q_DISABLE_COPY(ListAppComponentCompliancesResponsePrivate)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
