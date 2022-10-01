// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEENDPOINTSBATCHREQUEST_H
#define QTAWS_UPDATEENDPOINTSBATCHREQUEST_H

#include "pinpointrequest.h"

namespace QtAws {
namespace Pinpoint {

class UpdateEndpointsBatchRequestPrivate;

class QTAWSPINPOINT_EXPORT UpdateEndpointsBatchRequest : public PinpointRequest {

public:
    UpdateEndpointsBatchRequest(const UpdateEndpointsBatchRequest &other);
    UpdateEndpointsBatchRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateEndpointsBatchRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
