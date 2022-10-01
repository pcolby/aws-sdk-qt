// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCUSTOMROUTINGPORTMAPPINGSBYDESTINATIONREQUEST_H
#define QTAWS_LISTCUSTOMROUTINGPORTMAPPINGSBYDESTINATIONREQUEST_H

#include "globalacceleratorrequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class ListCustomRoutingPortMappingsByDestinationRequestPrivate;

class QTAWSGLOBALACCELERATOR_EXPORT ListCustomRoutingPortMappingsByDestinationRequest : public GlobalAcceleratorRequest {

public:
    ListCustomRoutingPortMappingsByDestinationRequest(const ListCustomRoutingPortMappingsByDestinationRequest &other);
    ListCustomRoutingPortMappingsByDestinationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListCustomRoutingPortMappingsByDestinationRequest)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
