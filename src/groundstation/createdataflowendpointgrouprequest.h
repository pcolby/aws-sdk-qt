// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDATAFLOWENDPOINTGROUPREQUEST_H
#define QTAWS_CREATEDATAFLOWENDPOINTGROUPREQUEST_H

#include "groundstationrequest.h"

namespace QtAws {
namespace GroundStation {

class CreateDataflowEndpointGroupRequestPrivate;

class QTAWSGROUNDSTATION_EXPORT CreateDataflowEndpointGroupRequest : public GroundStationRequest {

public:
    CreateDataflowEndpointGroupRequest(const CreateDataflowEndpointGroupRequest &other);
    CreateDataflowEndpointGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDataflowEndpointGroupRequest)

};

} // namespace GroundStation
} // namespace QtAws

#endif
