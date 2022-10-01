// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATACELLSFILTERRESPONSE_P_H
#define QTAWS_LISTDATACELLSFILTERRESPONSE_P_H

#include "lakeformationresponse_p.h"

namespace QtAws {
namespace LakeFormation {

class ListDataCellsFilterResponse;

class ListDataCellsFilterResponsePrivate : public LakeFormationResponsePrivate {

public:

    explicit ListDataCellsFilterResponsePrivate(ListDataCellsFilterResponse * const q);

    void parseListDataCellsFilterResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListDataCellsFilterResponse)
    Q_DISABLE_COPY(ListDataCellsFilterResponsePrivate)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
