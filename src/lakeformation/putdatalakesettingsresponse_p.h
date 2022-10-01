// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTDATALAKESETTINGSRESPONSE_P_H
#define QTAWS_PUTDATALAKESETTINGSRESPONSE_P_H

#include "lakeformationresponse_p.h"

namespace QtAws {
namespace LakeFormation {

class PutDataLakeSettingsResponse;

class PutDataLakeSettingsResponsePrivate : public LakeFormationResponsePrivate {

public:

    explicit PutDataLakeSettingsResponsePrivate(PutDataLakeSettingsResponse * const q);

    void parsePutDataLakeSettingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutDataLakeSettingsResponse)
    Q_DISABLE_COPY(PutDataLakeSettingsResponsePrivate)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
