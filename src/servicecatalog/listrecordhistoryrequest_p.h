// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRECORDHISTORYREQUEST_P_H
#define QTAWS_LISTRECORDHISTORYREQUEST_P_H

#include "servicecatalogrequest_p.h"
#include "listrecordhistoryrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class ListRecordHistoryRequest;

class ListRecordHistoryRequestPrivate : public ServiceCatalogRequestPrivate {

public:
    ListRecordHistoryRequestPrivate(const ServiceCatalogRequest::Action action,
                                   ListRecordHistoryRequest * const q);
    ListRecordHistoryRequestPrivate(const ListRecordHistoryRequestPrivate &other,
                                   ListRecordHistoryRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListRecordHistoryRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
