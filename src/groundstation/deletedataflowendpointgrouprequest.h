// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDATAFLOWENDPOINTGROUPREQUEST_H
#define QTAWS_DELETEDATAFLOWENDPOINTGROUPREQUEST_H

#include "groundstationrequest.h"

namespace QtAws {
namespace GroundStation {

class DeleteDataflowEndpointGroupRequestPrivate;

class QTAWSGROUNDSTATION_EXPORT DeleteDataflowEndpointGroupRequest : public GroundStationRequest {

public:
    DeleteDataflowEndpointGroupRequest(const DeleteDataflowEndpointGroupRequest &other);
    DeleteDataflowEndpointGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDataflowEndpointGroupRequest)

};

} // namespace GroundStation
} // namespace QtAws

#endif
