// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACCOUNTINTEGRATIONSRESPONSE_P_H
#define QTAWS_LISTACCOUNTINTEGRATIONSRESPONSE_P_H

#include "customerprofilesresponse_p.h"

namespace QtAws {
namespace CustomerProfiles {

class ListAccountIntegrationsResponse;

class ListAccountIntegrationsResponsePrivate : public CustomerProfilesResponsePrivate {

public:

    explicit ListAccountIntegrationsResponsePrivate(ListAccountIntegrationsResponse * const q);

    void parseListAccountIntegrationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAccountIntegrationsResponse)
    Q_DISABLE_COPY(ListAccountIntegrationsResponsePrivate)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif
