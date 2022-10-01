// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDATACELLSFILTERRESPONSE_P_H
#define QTAWS_DELETEDATACELLSFILTERRESPONSE_P_H

#include "lakeformationresponse_p.h"

namespace QtAws {
namespace LakeFormation {

class DeleteDataCellsFilterResponse;

class DeleteDataCellsFilterResponsePrivate : public LakeFormationResponsePrivate {

public:

    explicit DeleteDataCellsFilterResponsePrivate(DeleteDataCellsFilterResponse * const q);

    void parseDeleteDataCellsFilterResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteDataCellsFilterResponse)
    Q_DISABLE_COPY(DeleteDataCellsFilterResponsePrivate)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
