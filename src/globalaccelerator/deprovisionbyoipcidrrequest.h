// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEPROVISIONBYOIPCIDRREQUEST_H
#define QTAWS_DEPROVISIONBYOIPCIDRREQUEST_H

#include "globalacceleratorrequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class DeprovisionByoipCidrRequestPrivate;

class QTAWSGLOBALACCELERATOR_EXPORT DeprovisionByoipCidrRequest : public GlobalAcceleratorRequest {

public:
    DeprovisionByoipCidrRequest(const DeprovisionByoipCidrRequest &other);
    DeprovisionByoipCidrRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeprovisionByoipCidrRequest)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
