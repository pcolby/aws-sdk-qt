// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECUSTOMROUTINGACCELERATORREQUEST_H
#define QTAWS_UPDATECUSTOMROUTINGACCELERATORREQUEST_H

#include "globalacceleratorrequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class UpdateCustomRoutingAcceleratorRequestPrivate;

class QTAWSGLOBALACCELERATOR_EXPORT UpdateCustomRoutingAcceleratorRequest : public GlobalAcceleratorRequest {

public:
    UpdateCustomRoutingAcceleratorRequest(const UpdateCustomRoutingAcceleratorRequest &other);
    UpdateCustomRoutingAcceleratorRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateCustomRoutingAcceleratorRequest)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
