// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETUNNELREQUEST_H
#define QTAWS_DESCRIBETUNNELREQUEST_H

#include "iotsecuretunnelingrequest.h"

namespace QtAws {
namespace IoTSecureTunneling {

class DescribeTunnelRequestPrivate;

class QTAWSIOTSECURETUNNELING_EXPORT DescribeTunnelRequest : public IoTSecureTunnelingRequest {

public:
    DescribeTunnelRequest(const DescribeTunnelRequest &other);
    DescribeTunnelRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeTunnelRequest)

};

} // namespace IoTSecureTunneling
} // namespace QtAws

#endif
