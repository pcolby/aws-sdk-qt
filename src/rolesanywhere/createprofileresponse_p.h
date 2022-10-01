// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPROFILERESPONSE_P_H
#define QTAWS_CREATEPROFILERESPONSE_P_H

#include "rolesanywhereresponse_p.h"

namespace QtAws {
namespace RolesAnywhere {

class CreateProfileResponse;

class CreateProfileResponsePrivate : public RolesAnywhereResponsePrivate {

public:

    explicit CreateProfileResponsePrivate(CreateProfileResponse * const q);

    void parseCreateProfileResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateProfileResponse)
    Q_DISABLE_COPY(CreateProfileResponsePrivate)

};

} // namespace RolesAnywhere
} // namespace QtAws

#endif
