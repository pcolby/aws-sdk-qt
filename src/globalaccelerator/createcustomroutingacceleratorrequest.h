// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECUSTOMROUTINGACCELERATORREQUEST_H
#define QTAWS_CREATECUSTOMROUTINGACCELERATORREQUEST_H

#include "globalacceleratorrequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class CreateCustomRoutingAcceleratorRequestPrivate;

class QTAWSGLOBALACCELERATOR_EXPORT CreateCustomRoutingAcceleratorRequest : public GlobalAcceleratorRequest {

public:
    CreateCustomRoutingAcceleratorRequest(const CreateCustomRoutingAcceleratorRequest &other);
    CreateCustomRoutingAcceleratorRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateCustomRoutingAcceleratorRequest)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
