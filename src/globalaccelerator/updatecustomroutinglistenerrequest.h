// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECUSTOMROUTINGLISTENERREQUEST_H
#define QTAWS_UPDATECUSTOMROUTINGLISTENERREQUEST_H

#include "globalacceleratorrequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class UpdateCustomRoutingListenerRequestPrivate;

class QTAWSGLOBALACCELERATOR_EXPORT UpdateCustomRoutingListenerRequest : public GlobalAcceleratorRequest {

public:
    UpdateCustomRoutingListenerRequest(const UpdateCustomRoutingListenerRequest &other);
    UpdateCustomRoutingListenerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateCustomRoutingListenerRequest)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
