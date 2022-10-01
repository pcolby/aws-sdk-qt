// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDUSERTOGROUPRESPONSE_P_H
#define QTAWS_ADDUSERTOGROUPRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class AddUserToGroupResponse;

class AddUserToGroupResponsePrivate : public IamResponsePrivate {

public:

    explicit AddUserToGroupResponsePrivate(AddUserToGroupResponse * const q);

    void parseAddUserToGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AddUserToGroupResponse)
    Q_DISABLE_COPY(AddUserToGroupResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
