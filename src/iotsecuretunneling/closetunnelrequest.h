// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLOSETUNNELREQUEST_H
#define QTAWS_CLOSETUNNELREQUEST_H

#include "iotsecuretunnelingrequest.h"

namespace QtAws {
namespace IoTSecureTunneling {

class CloseTunnelRequestPrivate;

class QTAWSIOTSECURETUNNELING_EXPORT CloseTunnelRequest : public IoTSecureTunnelingRequest {

public:
    CloseTunnelRequest(const CloseTunnelRequest &other);
    CloseTunnelRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CloseTunnelRequest)

};

} // namespace IoTSecureTunneling
} // namespace QtAws

#endif
