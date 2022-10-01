// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPVERSIONSRESPONSE_P_H
#define QTAWS_LISTAPPVERSIONSRESPONSE_P_H

#include "resiliencehubresponse_p.h"

namespace QtAws {
namespace ResilienceHub {

class ListAppVersionsResponse;

class ListAppVersionsResponsePrivate : public ResilienceHubResponsePrivate {

public:

    explicit ListAppVersionsResponsePrivate(ListAppVersionsResponse * const q);

    void parseListAppVersionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAppVersionsResponse)
    Q_DISABLE_COPY(ListAppVersionsResponsePrivate)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
