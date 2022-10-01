// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GRANTPERMISSIONSRESPONSE_P_H
#define QTAWS_GRANTPERMISSIONSRESPONSE_P_H

#include "lakeformationresponse_p.h"

namespace QtAws {
namespace LakeFormation {

class GrantPermissionsResponse;

class GrantPermissionsResponsePrivate : public LakeFormationResponsePrivate {

public:

    explicit GrantPermissionsResponsePrivate(GrantPermissionsResponse * const q);

    void parseGrantPermissionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GrantPermissionsResponse)
    Q_DISABLE_COPY(GrantPermissionsResponsePrivate)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
