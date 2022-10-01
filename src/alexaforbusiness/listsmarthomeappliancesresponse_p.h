// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSMARTHOMEAPPLIANCESRESPONSE_P_H
#define QTAWS_LISTSMARTHOMEAPPLIANCESRESPONSE_P_H

#include "alexaforbusinessresponse_p.h"

namespace QtAws {
namespace AlexaForBusiness {

class ListSmartHomeAppliancesResponse;

class ListSmartHomeAppliancesResponsePrivate : public AlexaForBusinessResponsePrivate {

public:

    explicit ListSmartHomeAppliancesResponsePrivate(ListSmartHomeAppliancesResponse * const q);

    void parseListSmartHomeAppliancesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListSmartHomeAppliancesResponse)
    Q_DISABLE_COPY(ListSmartHomeAppliancesResponsePrivate)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
