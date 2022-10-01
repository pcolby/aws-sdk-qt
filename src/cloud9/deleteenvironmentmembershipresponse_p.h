// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEENVIRONMENTMEMBERSHIPRESPONSE_P_H
#define QTAWS_DELETEENVIRONMENTMEMBERSHIPRESPONSE_P_H

#include "cloud9response_p.h"

namespace QtAws {
namespace Cloud9 {

class DeleteEnvironmentMembershipResponse;

class DeleteEnvironmentMembershipResponsePrivate : public Cloud9ResponsePrivate {

public:

    explicit DeleteEnvironmentMembershipResponsePrivate(DeleteEnvironmentMembershipResponse * const q);

    void parseDeleteEnvironmentMembershipResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteEnvironmentMembershipResponse)
    Q_DISABLE_COPY(DeleteEnvironmentMembershipResponsePrivate)

};

} // namespace Cloud9
} // namespace QtAws

#endif
