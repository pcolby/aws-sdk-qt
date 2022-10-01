// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTUNNELSREQUEST_H
#define QTAWS_LISTTUNNELSREQUEST_H

#include "iotsecuretunnelingrequest.h"

namespace QtAws {
namespace IoTSecureTunneling {

class ListTunnelsRequestPrivate;

class QTAWSIOTSECURETUNNELING_EXPORT ListTunnelsRequest : public IoTSecureTunnelingRequest {

public:
    ListTunnelsRequest(const ListTunnelsRequest &other);
    ListTunnelsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTunnelsRequest)

};

} // namespace IoTSecureTunneling
} // namespace QtAws

#endif
