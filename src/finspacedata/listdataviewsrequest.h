// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATAVIEWSREQUEST_H
#define QTAWS_LISTDATAVIEWSREQUEST_H

#include "finspacedatarequest.h"

namespace QtAws {
namespace FinspaceData {

class ListDataViewsRequestPrivate;

class QTAWSFINSPACEDATA_EXPORT ListDataViewsRequest : public FinspaceDataRequest {

public:
    ListDataViewsRequest(const ListDataViewsRequest &other);
    ListDataViewsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDataViewsRequest)

};

} // namespace FinspaceData
} // namespace QtAws

#endif
