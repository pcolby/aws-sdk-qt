// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRELATEDITEMSREQUEST_H
#define QTAWS_LISTRELATEDITEMSREQUEST_H

#include "ssmincidentsrequest.h"

namespace QtAws {
namespace SsmIncidents {

class ListRelatedItemsRequestPrivate;

class QTAWSSSMINCIDENTS_EXPORT ListRelatedItemsRequest : public SsmIncidentsRequest {

public:
    ListRelatedItemsRequest(const ListRelatedItemsRequest &other);
    ListRelatedItemsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRelatedItemsRequest)

};

} // namespace SsmIncidents
} // namespace QtAws

#endif
