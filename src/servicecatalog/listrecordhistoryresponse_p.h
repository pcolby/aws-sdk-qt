// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRECORDHISTORYRESPONSE_P_H
#define QTAWS_LISTRECORDHISTORYRESPONSE_P_H

#include "servicecatalogresponse_p.h"

namespace QtAws {
namespace ServiceCatalog {

class ListRecordHistoryResponse;

class ListRecordHistoryResponsePrivate : public ServiceCatalogResponsePrivate {

public:

    explicit ListRecordHistoryResponsePrivate(ListRecordHistoryResponse * const q);

    void parseListRecordHistoryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListRecordHistoryResponse)
    Q_DISABLE_COPY(ListRecordHistoryResponsePrivate)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
