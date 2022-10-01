// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDEDICATEDIPPOOLSREQUEST_H
#define QTAWS_LISTDEDICATEDIPPOOLSREQUEST_H

#include "pinpointemailrequest.h"

namespace QtAws {
namespace PinpointEmail {

class ListDedicatedIpPoolsRequestPrivate;

class QTAWSPINPOINTEMAIL_EXPORT ListDedicatedIpPoolsRequest : public PinpointEmailRequest {

public:
    ListDedicatedIpPoolsRequest(const ListDedicatedIpPoolsRequest &other);
    ListDedicatedIpPoolsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDedicatedIpPoolsRequest)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
