// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEUSERFROMGROUPRESPONSE_P_H
#define QTAWS_REMOVEUSERFROMGROUPRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class RemoveUserFromGroupResponse;

class RemoveUserFromGroupResponsePrivate : public IamResponsePrivate {

public:

    explicit RemoveUserFromGroupResponsePrivate(RemoveUserFromGroupResponse * const q);

    void parseRemoveUserFromGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RemoveUserFromGroupResponse)
    Q_DISABLE_COPY(RemoveUserFromGroupResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
