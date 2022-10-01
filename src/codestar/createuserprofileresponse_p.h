// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEUSERPROFILERESPONSE_P_H
#define QTAWS_CREATEUSERPROFILERESPONSE_P_H

#include "codestarresponse_p.h"

namespace QtAws {
namespace CodeStar {

class CreateUserProfileResponse;

class CreateUserProfileResponsePrivate : public CodeStarResponsePrivate {

public:

    explicit CreateUserProfileResponsePrivate(CreateUserProfileResponse * const q);

    void parseCreateUserProfileResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateUserProfileResponse)
    Q_DISABLE_COPY(CreateUserProfileResponsePrivate)

};

} // namespace CodeStar
} // namespace QtAws

#endif
