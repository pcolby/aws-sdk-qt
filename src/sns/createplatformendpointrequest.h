// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPLATFORMENDPOINTREQUEST_H
#define QTAWS_CREATEPLATFORMENDPOINTREQUEST_H

#include "snsrequest.h"

namespace QtAws {
namespace Sns {

class CreatePlatformEndpointRequestPrivate;

class QTAWSSNS_EXPORT CreatePlatformEndpointRequest : public SnsRequest {

public:
    CreatePlatformEndpointRequest(const CreatePlatformEndpointRequest &other);
    CreatePlatformEndpointRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreatePlatformEndpointRequest)

};

} // namespace Sns
} // namespace QtAws

#endif
