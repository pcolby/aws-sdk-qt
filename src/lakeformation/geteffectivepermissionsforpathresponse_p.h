// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEFFECTIVEPERMISSIONSFORPATHRESPONSE_P_H
#define QTAWS_GETEFFECTIVEPERMISSIONSFORPATHRESPONSE_P_H

#include "lakeformationresponse_p.h"

namespace QtAws {
namespace LakeFormation {

class GetEffectivePermissionsForPathResponse;

class GetEffectivePermissionsForPathResponsePrivate : public LakeFormationResponsePrivate {

public:

    explicit GetEffectivePermissionsForPathResponsePrivate(GetEffectivePermissionsForPathResponse * const q);

    void parseGetEffectivePermissionsForPathResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetEffectivePermissionsForPathResponse)
    Q_DISABLE_COPY(GetEffectivePermissionsForPathResponsePrivate)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
