// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTITEMSREQUEST_H
#define QTAWS_LISTITEMSREQUEST_H

#include "mediastoredatarequest.h"

namespace QtAws {
namespace MediaStoreData {

class ListItemsRequestPrivate;

class QTAWSMEDIASTOREDATA_EXPORT ListItemsRequest : public MediaStoreDataRequest {

public:
    ListItemsRequest(const ListItemsRequest &other);
    ListItemsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListItemsRequest)

};

} // namespace MediaStoreData
} // namespace QtAws

#endif
