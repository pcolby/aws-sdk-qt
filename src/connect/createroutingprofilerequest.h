// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEROUTINGPROFILEREQUEST_H
#define QTAWS_CREATEROUTINGPROFILEREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class CreateRoutingProfileRequestPrivate;

class QTAWSCONNECT_EXPORT CreateRoutingProfileRequest : public ConnectRequest {

public:
    CreateRoutingProfileRequest(const CreateRoutingProfileRequest &other);
    CreateRoutingProfileRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateRoutingProfileRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
