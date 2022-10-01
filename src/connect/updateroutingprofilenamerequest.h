// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEROUTINGPROFILENAMEREQUEST_H
#define QTAWS_UPDATEROUTINGPROFILENAMEREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class UpdateRoutingProfileNameRequestPrivate;

class QTAWSCONNECT_EXPORT UpdateRoutingProfileNameRequest : public ConnectRequest {

public:
    UpdateRoutingProfileNameRequest(const UpdateRoutingProfileNameRequest &other);
    UpdateRoutingProfileNameRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateRoutingProfileNameRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
