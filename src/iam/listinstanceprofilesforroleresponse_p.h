// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINSTANCEPROFILESFORROLERESPONSE_P_H
#define QTAWS_LISTINSTANCEPROFILESFORROLERESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class ListInstanceProfilesForRoleResponse;

class ListInstanceProfilesForRoleResponsePrivate : public IamResponsePrivate {

public:

    explicit ListInstanceProfilesForRoleResponsePrivate(ListInstanceProfilesForRoleResponse * const q);

    void parseListInstanceProfilesForRoleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListInstanceProfilesForRoleResponse)
    Q_DISABLE_COPY(ListInstanceProfilesForRoleResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
