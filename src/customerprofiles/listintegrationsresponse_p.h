// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINTEGRATIONSRESPONSE_P_H
#define QTAWS_LISTINTEGRATIONSRESPONSE_P_H

#include "customerprofilesresponse_p.h"

namespace QtAws {
namespace CustomerProfiles {

class ListIntegrationsResponse;

class ListIntegrationsResponsePrivate : public CustomerProfilesResponsePrivate {

public:

    explicit ListIntegrationsResponsePrivate(ListIntegrationsResponse * const q);

    void parseListIntegrationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListIntegrationsResponse)
    Q_DISABLE_COPY(ListIntegrationsResponsePrivate)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif
