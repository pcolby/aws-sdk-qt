// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PROVISIONBYOIPCIDRREQUEST_H
#define QTAWS_PROVISIONBYOIPCIDRREQUEST_H

#include "globalacceleratorrequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class ProvisionByoipCidrRequestPrivate;

class QTAWSGLOBALACCELERATOR_EXPORT ProvisionByoipCidrRequest : public GlobalAcceleratorRequest {

public:
    ProvisionByoipCidrRequest(const ProvisionByoipCidrRequest &other);
    ProvisionByoipCidrRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ProvisionByoipCidrRequest)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
