// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATENETWORKPROFILERESPONSE_P_H
#define QTAWS_CREATENETWORKPROFILERESPONSE_P_H

#include "alexaforbusinessresponse_p.h"

namespace QtAws {
namespace AlexaForBusiness {

class CreateNetworkProfileResponse;

class CreateNetworkProfileResponsePrivate : public AlexaForBusinessResponsePrivate {

public:

    explicit CreateNetworkProfileResponsePrivate(CreateNetworkProfileResponse * const q);

    void parseCreateNetworkProfileResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateNetworkProfileResponse)
    Q_DISABLE_COPY(CreateNetworkProfileResponsePrivate)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
