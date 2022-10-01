// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMANAGEDENDPOINTREQUEST_H
#define QTAWS_DELETEMANAGEDENDPOINTREQUEST_H

#include "emrcontainersrequest.h"

namespace QtAws {
namespace Emrcontainers {

class DeleteManagedEndpointRequestPrivate;

class QTAWSEMRCONTAINERS_EXPORT DeleteManagedEndpointRequest : public EmrcontainersRequest {

public:
    DeleteManagedEndpointRequest(const DeleteManagedEndpointRequest &other);
    DeleteManagedEndpointRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteManagedEndpointRequest)

};

} // namespace Emrcontainers
} // namespace QtAws

#endif
