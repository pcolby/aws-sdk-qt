// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEDEVICEWITHNETWORKPROFILERESPONSE_P_H
#define QTAWS_ASSOCIATEDEVICEWITHNETWORKPROFILERESPONSE_P_H

#include "alexaforbusinessresponse_p.h"

namespace QtAws {
namespace AlexaForBusiness {

class AssociateDeviceWithNetworkProfileResponse;

class AssociateDeviceWithNetworkProfileResponsePrivate : public AlexaForBusinessResponsePrivate {

public:

    explicit AssociateDeviceWithNetworkProfileResponsePrivate(AssociateDeviceWithNetworkProfileResponse * const q);

    void parseAssociateDeviceWithNetworkProfileResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateDeviceWithNetworkProfileResponse)
    Q_DISABLE_COPY(AssociateDeviceWithNetworkProfileResponsePrivate)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
