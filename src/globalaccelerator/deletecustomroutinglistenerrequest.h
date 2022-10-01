// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECUSTOMROUTINGLISTENERREQUEST_H
#define QTAWS_DELETECUSTOMROUTINGLISTENERREQUEST_H

#include "globalacceleratorrequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class DeleteCustomRoutingListenerRequestPrivate;

class QTAWSGLOBALACCELERATOR_EXPORT DeleteCustomRoutingListenerRequest : public GlobalAcceleratorRequest {

public:
    DeleteCustomRoutingListenerRequest(const DeleteCustomRoutingListenerRequest &other);
    DeleteCustomRoutingListenerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteCustomRoutingListenerRequest)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
