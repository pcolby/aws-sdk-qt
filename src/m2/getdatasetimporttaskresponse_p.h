// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDATASETIMPORTTASKRESPONSE_P_H
#define QTAWS_GETDATASETIMPORTTASKRESPONSE_P_H

#include "m2response_p.h"

namespace QtAws {
namespace M2 {

class GetDataSetImportTaskResponse;

class GetDataSetImportTaskResponsePrivate : public M2ResponsePrivate {

public:

    explicit GetDataSetImportTaskResponsePrivate(GetDataSetImportTaskResponse * const q);

    void parseGetDataSetImportTaskResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDataSetImportTaskResponse)
    Q_DISABLE_COPY(GetDataSetImportTaskResponsePrivate)

};

} // namespace M2
} // namespace QtAws

#endif
