// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEROUTINGPROFILEQUEUESREQUEST_H
#define QTAWS_DISASSOCIATEROUTINGPROFILEQUEUESREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class DisassociateRoutingProfileQueuesRequestPrivate;

class QTAWSCONNECT_EXPORT DisassociateRoutingProfileQueuesRequest : public ConnectRequest {

public:
    DisassociateRoutingProfileQueuesRequest(const DisassociateRoutingProfileQueuesRequest &other);
    DisassociateRoutingProfileQueuesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateRoutingProfileQueuesRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
