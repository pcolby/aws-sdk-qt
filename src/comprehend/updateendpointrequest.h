// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEENDPOINTREQUEST_H
#define QTAWS_UPDATEENDPOINTREQUEST_H

#include "comprehendrequest.h"

namespace QtAws {
namespace Comprehend {

class UpdateEndpointRequestPrivate;

class QTAWSCOMPREHEND_EXPORT UpdateEndpointRequest : public ComprehendRequest {

public:
    UpdateEndpointRequest(const UpdateEndpointRequest &other);
    UpdateEndpointRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateEndpointRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif
