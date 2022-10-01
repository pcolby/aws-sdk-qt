// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATASETIMPORTHISTORYREQUEST_P_H
#define QTAWS_LISTDATASETIMPORTHISTORYREQUEST_P_H

#include "m2request_p.h"
#include "listdatasetimporthistoryrequest.h"

namespace QtAws {
namespace M2 {

class ListDataSetImportHistoryRequest;

class ListDataSetImportHistoryRequestPrivate : public M2RequestPrivate {

public:
    ListDataSetImportHistoryRequestPrivate(const M2Request::Action action,
                                   ListDataSetImportHistoryRequest * const q);
    ListDataSetImportHistoryRequestPrivate(const ListDataSetImportHistoryRequestPrivate &other,
                                   ListDataSetImportHistoryRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDataSetImportHistoryRequest)

};

} // namespace M2
} // namespace QtAws

#endif
