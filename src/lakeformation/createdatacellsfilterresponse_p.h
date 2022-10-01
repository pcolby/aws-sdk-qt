// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDATACELLSFILTERRESPONSE_P_H
#define QTAWS_CREATEDATACELLSFILTERRESPONSE_P_H

#include "lakeformationresponse_p.h"

namespace QtAws {
namespace LakeFormation {

class CreateDataCellsFilterResponse;

class CreateDataCellsFilterResponsePrivate : public LakeFormationResponsePrivate {

public:

    explicit CreateDataCellsFilterResponsePrivate(CreateDataCellsFilterResponse * const q);

    void parseCreateDataCellsFilterResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateDataCellsFilterResponse)
    Q_DISABLE_COPY(CreateDataCellsFilterResponsePrivate)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
