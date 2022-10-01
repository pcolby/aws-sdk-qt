// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETENETWORKPROFILERESPONSE_P_H
#define QTAWS_DELETENETWORKPROFILERESPONSE_P_H

#include "alexaforbusinessresponse_p.h"

namespace QtAws {
namespace AlexaForBusiness {

class DeleteNetworkProfileResponse;

class DeleteNetworkProfileResponsePrivate : public AlexaForBusinessResponsePrivate {

public:

    explicit DeleteNetworkProfileResponsePrivate(DeleteNetworkProfileResponse * const q);

    void parseDeleteNetworkProfileResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteNetworkProfileResponse)
    Q_DISABLE_COPY(DeleteNetworkProfileResponsePrivate)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
