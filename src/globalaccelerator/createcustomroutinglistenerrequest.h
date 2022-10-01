// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECUSTOMROUTINGLISTENERREQUEST_H
#define QTAWS_CREATECUSTOMROUTINGLISTENERREQUEST_H

#include "globalacceleratorrequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class CreateCustomRoutingListenerRequestPrivate;

class QTAWSGLOBALACCELERATOR_EXPORT CreateCustomRoutingListenerRequest : public GlobalAcceleratorRequest {

public:
    CreateCustomRoutingListenerRequest(const CreateCustomRoutingListenerRequest &other);
    CreateCustomRoutingListenerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateCustomRoutingListenerRequest)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
