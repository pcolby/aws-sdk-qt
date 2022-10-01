// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDATASETIMPORTTASKRESPONSE_P_H
#define QTAWS_CREATEDATASETIMPORTTASKRESPONSE_P_H

#include "m2response_p.h"

namespace QtAws {
namespace M2 {

class CreateDataSetImportTaskResponse;

class CreateDataSetImportTaskResponsePrivate : public M2ResponsePrivate {

public:

    explicit CreateDataSetImportTaskResponsePrivate(CreateDataSetImportTaskResponse * const q);

    void parseCreateDataSetImportTaskResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateDataSetImportTaskResponse)
    Q_DISABLE_COPY(CreateDataSetImportTaskResponsePrivate)

};

} // namespace M2
} // namespace QtAws

#endif
