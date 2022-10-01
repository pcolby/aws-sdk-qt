// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPROFILERESPONSE_P_H
#define QTAWS_GETPROFILERESPONSE_P_H

#include "alexaforbusinessresponse_p.h"

namespace QtAws {
namespace AlexaForBusiness {

class GetProfileResponse;

class GetProfileResponsePrivate : public AlexaForBusinessResponsePrivate {

public:

    explicit GetProfileResponsePrivate(GetProfileResponse * const q);

    void parseGetProfileResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetProfileResponse)
    Q_DISABLE_COPY(GetProfileResponsePrivate)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
