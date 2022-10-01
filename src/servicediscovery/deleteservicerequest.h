// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESERVICEREQUEST_H
#define QTAWS_DELETESERVICEREQUEST_H

#include "servicediscoveryrequest.h"

namespace QtAws {
namespace ServiceDiscovery {

class DeleteServiceRequestPrivate;

class QTAWSSERVICEDISCOVERY_EXPORT DeleteServiceRequest : public ServiceDiscoveryRequest {

public:
    DeleteServiceRequest(const DeleteServiceRequest &other);
    DeleteServiceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteServiceRequest)

};

} // namespace ServiceDiscovery
} // namespace QtAws

#endif
