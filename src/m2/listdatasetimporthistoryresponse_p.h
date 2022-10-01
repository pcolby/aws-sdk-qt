// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATASETIMPORTHISTORYRESPONSE_P_H
#define QTAWS_LISTDATASETIMPORTHISTORYRESPONSE_P_H

#include "m2response_p.h"

namespace QtAws {
namespace M2 {

class ListDataSetImportHistoryResponse;

class ListDataSetImportHistoryResponsePrivate : public M2ResponsePrivate {

public:

    explicit ListDataSetImportHistoryResponsePrivate(ListDataSetImportHistoryResponse * const q);

    void parseListDataSetImportHistoryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListDataSetImportHistoryResponse)
    Q_DISABLE_COPY(ListDataSetImportHistoryResponsePrivate)

};

} // namespace M2
} // namespace QtAws

#endif
