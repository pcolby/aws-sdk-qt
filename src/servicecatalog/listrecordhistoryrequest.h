// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRECORDHISTORYREQUEST_H
#define QTAWS_LISTRECORDHISTORYREQUEST_H

#include "servicecatalogrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class ListRecordHistoryRequestPrivate;

class QTAWSSERVICECATALOG_EXPORT ListRecordHistoryRequest : public ServiceCatalogRequest {

public:
    ListRecordHistoryRequest(const ListRecordHistoryRequest &other);
    ListRecordHistoryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRecordHistoryRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
