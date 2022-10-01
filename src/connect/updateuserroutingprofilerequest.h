// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEUSERROUTINGPROFILEREQUEST_H
#define QTAWS_UPDATEUSERROUTINGPROFILEREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class UpdateUserRoutingProfileRequestPrivate;

class QTAWSCONNECT_EXPORT UpdateUserRoutingProfileRequest : public ConnectRequest {

public:
    UpdateUserRoutingProfileRequest(const UpdateUserRoutingProfileRequest &other);
    UpdateUserRoutingProfileRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateUserRoutingProfileRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
