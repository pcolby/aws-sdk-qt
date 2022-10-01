// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEENVIRONMENTMEMBERSHIPRESPONSE_P_H
#define QTAWS_CREATEENVIRONMENTMEMBERSHIPRESPONSE_P_H

#include "cloud9response_p.h"

namespace QtAws {
namespace Cloud9 {

class CreateEnvironmentMembershipResponse;

class CreateEnvironmentMembershipResponsePrivate : public Cloud9ResponsePrivate {

public:

    explicit CreateEnvironmentMembershipResponsePrivate(CreateEnvironmentMembershipResponse * const q);

    void parseCreateEnvironmentMembershipResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateEnvironmentMembershipResponse)
    Q_DISABLE_COPY(CreateEnvironmentMembershipResponsePrivate)

};

} // namespace Cloud9
} // namespace QtAws

#endif
