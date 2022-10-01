// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REVOKEPERMISSIONSRESPONSE_P_H
#define QTAWS_REVOKEPERMISSIONSRESPONSE_P_H

#include "lakeformationresponse_p.h"

namespace QtAws {
namespace LakeFormation {

class RevokePermissionsResponse;

class RevokePermissionsResponsePrivate : public LakeFormationResponsePrivate {

public:

    explicit RevokePermissionsResponsePrivate(RevokePermissionsResponse * const q);

    void parseRevokePermissionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RevokePermissionsResponse)
    Q_DISABLE_COPY(RevokePermissionsResponsePrivate)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
