// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPROFILERESPONSE_P_H
#define QTAWS_UPDATEPROFILERESPONSE_P_H

#include "alexaforbusinessresponse_p.h"

namespace QtAws {
namespace AlexaForBusiness {

class UpdateProfileResponse;

class UpdateProfileResponsePrivate : public AlexaForBusinessResponsePrivate {

public:

    explicit UpdateProfileResponsePrivate(UpdateProfileResponse * const q);

    void parseUpdateProfileResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateProfileResponse)
    Q_DISABLE_COPY(UpdateProfileResponsePrivate)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
