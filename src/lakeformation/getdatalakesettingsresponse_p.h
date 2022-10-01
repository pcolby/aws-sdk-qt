// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDATALAKESETTINGSRESPONSE_P_H
#define QTAWS_GETDATALAKESETTINGSRESPONSE_P_H

#include "lakeformationresponse_p.h"

namespace QtAws {
namespace LakeFormation {

class GetDataLakeSettingsResponse;

class GetDataLakeSettingsResponsePrivate : public LakeFormationResponsePrivate {

public:

    explicit GetDataLakeSettingsResponsePrivate(GetDataLakeSettingsResponse * const q);

    void parseGetDataLakeSettingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDataLakeSettingsResponse)
    Q_DISABLE_COPY(GetDataLakeSettingsResponsePrivate)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
