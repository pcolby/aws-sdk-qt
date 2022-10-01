// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTROUTINGPROFILESREQUEST_H
#define QTAWS_LISTROUTINGPROFILESREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class ListRoutingProfilesRequestPrivate;

class QTAWSCONNECT_EXPORT ListRoutingProfilesRequest : public ConnectRequest {

public:
    ListRoutingProfilesRequest(const ListRoutingProfilesRequest &other);
    ListRoutingProfilesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRoutingProfilesRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
