// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETWORKUNITSRESPONSE_P_H
#define QTAWS_GETWORKUNITSRESPONSE_P_H

#include "lakeformationresponse_p.h"

namespace QtAws {
namespace LakeFormation {

class GetWorkUnitsResponse;

class GetWorkUnitsResponsePrivate : public LakeFormationResponsePrivate {

public:

    explicit GetWorkUnitsResponsePrivate(GetWorkUnitsResponse * const q);

    void parseGetWorkUnitsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetWorkUnitsResponse)
    Q_DISABLE_COPY(GetWorkUnitsResponsePrivate)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
