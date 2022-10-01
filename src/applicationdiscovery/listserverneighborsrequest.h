// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSERVERNEIGHBORSREQUEST_H
#define QTAWS_LISTSERVERNEIGHBORSREQUEST_H

#include "applicationdiscoveryrequest.h"

namespace QtAws {
namespace ApplicationDiscovery {

class ListServerNeighborsRequestPrivate;

class QTAWSAPPLICATIONDISCOVERY_EXPORT ListServerNeighborsRequest : public ApplicationDiscoveryRequest {

public:
    ListServerNeighborsRequest(const ListServerNeighborsRequest &other);
    ListServerNeighborsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListServerNeighborsRequest)

};

} // namespace ApplicationDiscovery
} // namespace QtAws

#endif
