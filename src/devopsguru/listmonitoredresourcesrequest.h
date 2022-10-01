// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMONITOREDRESOURCESREQUEST_H
#define QTAWS_LISTMONITOREDRESOURCESREQUEST_H

#include "devopsgururequest.h"

namespace QtAws {
namespace DevOpsGuru {

class ListMonitoredResourcesRequestPrivate;

class QTAWSDEVOPSGURU_EXPORT ListMonitoredResourcesRequest : public DevOpsGuruRequest {

public:
    ListMonitoredResourcesRequest(const ListMonitoredResourcesRequest &other);
    ListMonitoredResourcesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListMonitoredResourcesRequest)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
