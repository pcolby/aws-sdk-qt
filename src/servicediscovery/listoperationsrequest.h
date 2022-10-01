// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTOPERATIONSREQUEST_H
#define QTAWS_LISTOPERATIONSREQUEST_H

#include "servicediscoveryrequest.h"

namespace QtAws {
namespace ServiceDiscovery {

class ListOperationsRequestPrivate;

class QTAWSSERVICEDISCOVERY_EXPORT ListOperationsRequest : public ServiceDiscoveryRequest {

public:
    ListOperationsRequest(const ListOperationsRequest &other);
    ListOperationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListOperationsRequest)

};

} // namespace ServiceDiscovery
} // namespace QtAws

#endif
