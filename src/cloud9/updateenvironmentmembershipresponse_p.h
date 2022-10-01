// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEENVIRONMENTMEMBERSHIPRESPONSE_P_H
#define QTAWS_UPDATEENVIRONMENTMEMBERSHIPRESPONSE_P_H

#include "cloud9response_p.h"

namespace QtAws {
namespace Cloud9 {

class UpdateEnvironmentMembershipResponse;

class UpdateEnvironmentMembershipResponsePrivate : public Cloud9ResponsePrivate {

public:

    explicit UpdateEnvironmentMembershipResponsePrivate(UpdateEnvironmentMembershipResponse * const q);

    void parseUpdateEnvironmentMembershipResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateEnvironmentMembershipResponse)
    Q_DISABLE_COPY(UpdateEnvironmentMembershipResponsePrivate)

};

} // namespace Cloud9
} // namespace QtAws

#endif
