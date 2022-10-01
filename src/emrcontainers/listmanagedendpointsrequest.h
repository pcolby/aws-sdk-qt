// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMANAGEDENDPOINTSREQUEST_H
#define QTAWS_LISTMANAGEDENDPOINTSREQUEST_H

#include "emrcontainersrequest.h"

namespace QtAws {
namespace Emrcontainers {

class ListManagedEndpointsRequestPrivate;

class QTAWSEMRCONTAINERS_EXPORT ListManagedEndpointsRequest : public EmrcontainersRequest {

public:
    ListManagedEndpointsRequest(const ListManagedEndpointsRequest &other);
    ListManagedEndpointsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListManagedEndpointsRequest)

};

} // namespace Emrcontainers
} // namespace QtAws

#endif
