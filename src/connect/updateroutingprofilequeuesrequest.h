// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEROUTINGPROFILEQUEUESREQUEST_H
#define QTAWS_UPDATEROUTINGPROFILEQUEUESREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class UpdateRoutingProfileQueuesRequestPrivate;

class QTAWSCONNECT_EXPORT UpdateRoutingProfileQueuesRequest : public ConnectRequest {

public:
    UpdateRoutingProfileQueuesRequest(const UpdateRoutingProfileQueuesRequest &other);
    UpdateRoutingProfileQueuesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateRoutingProfileQueuesRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
