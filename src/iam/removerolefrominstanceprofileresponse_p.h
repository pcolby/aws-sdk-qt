// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEROLEFROMINSTANCEPROFILERESPONSE_P_H
#define QTAWS_REMOVEROLEFROMINSTANCEPROFILERESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class RemoveRoleFromInstanceProfileResponse;

class RemoveRoleFromInstanceProfileResponsePrivate : public IamResponsePrivate {

public:

    explicit RemoveRoleFromInstanceProfileResponsePrivate(RemoveRoleFromInstanceProfileResponse * const q);

    void parseRemoveRoleFromInstanceProfileResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RemoveRoleFromInstanceProfileResponse)
    Q_DISABLE_COPY(RemoveRoleFromInstanceProfileResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
