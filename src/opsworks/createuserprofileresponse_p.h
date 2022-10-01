// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEUSERPROFILERESPONSE_P_H
#define QTAWS_CREATEUSERPROFILERESPONSE_P_H

#include "opsworksresponse_p.h"

namespace QtAws {
namespace OpsWorks {

class CreateUserProfileResponse;

class CreateUserProfileResponsePrivate : public OpsWorksResponsePrivate {

public:

    explicit CreateUserProfileResponsePrivate(CreateUserProfileResponse * const q);

    void parseCreateUserProfileResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateUserProfileResponse)
    Q_DISABLE_COPY(CreateUserProfileResponsePrivate)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
