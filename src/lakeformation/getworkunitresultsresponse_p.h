// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETWORKUNITRESULTSRESPONSE_P_H
#define QTAWS_GETWORKUNITRESULTSRESPONSE_P_H

#include "lakeformationresponse_p.h"

namespace QtAws {
namespace LakeFormation {

class GetWorkUnitResultsResponse;

class GetWorkUnitResultsResponsePrivate : public LakeFormationResponsePrivate {

public:

    explicit GetWorkUnitResultsResponsePrivate(GetWorkUnitResultsResponse * const q);

    void parseGetWorkUnitResultsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetWorkUnitResultsResponse)
    Q_DISABLE_COPY(GetWorkUnitResultsResponsePrivate)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
