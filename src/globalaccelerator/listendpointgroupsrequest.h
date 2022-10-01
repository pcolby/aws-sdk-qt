// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTENDPOINTGROUPSREQUEST_H
#define QTAWS_LISTENDPOINTGROUPSREQUEST_H

#include "globalacceleratorrequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class ListEndpointGroupsRequestPrivate;

class QTAWSGLOBALACCELERATOR_EXPORT ListEndpointGroupsRequest : public GlobalAcceleratorRequest {

public:
    ListEndpointGroupsRequest(const ListEndpointGroupsRequest &other);
    ListEndpointGroupsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListEndpointGroupsRequest)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
