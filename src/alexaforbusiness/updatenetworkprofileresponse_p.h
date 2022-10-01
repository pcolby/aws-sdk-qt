// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATENETWORKPROFILERESPONSE_P_H
#define QTAWS_UPDATENETWORKPROFILERESPONSE_P_H

#include "alexaforbusinessresponse_p.h"

namespace QtAws {
namespace AlexaForBusiness {

class UpdateNetworkProfileResponse;

class UpdateNetworkProfileResponsePrivate : public AlexaForBusinessResponsePrivate {

public:

    explicit UpdateNetworkProfileResponsePrivate(UpdateNetworkProfileResponse * const q);

    void parseUpdateNetworkProfileResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateNetworkProfileResponse)
    Q_DISABLE_COPY(UpdateNetworkProfileResponsePrivate)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
