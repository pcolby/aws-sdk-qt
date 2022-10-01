// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTROUTINGPROFILEQUEUESREQUEST_H
#define QTAWS_LISTROUTINGPROFILEQUEUESREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class ListRoutingProfileQueuesRequestPrivate;

class QTAWSCONNECT_EXPORT ListRoutingProfileQueuesRequest : public ConnectRequest {

public:
    ListRoutingProfileQueuesRequest(const ListRoutingProfileQueuesRequest &other);
    ListRoutingProfileQueuesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRoutingProfileQueuesRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
