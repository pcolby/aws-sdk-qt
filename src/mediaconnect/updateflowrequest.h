// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFLOWREQUEST_H
#define QTAWS_UPDATEFLOWREQUEST_H

#include "mediaconnectrequest.h"

namespace QtAws {
namespace MediaConnect {

class UpdateFlowRequestPrivate;

class QTAWSMEDIACONNECT_EXPORT UpdateFlowRequest : public MediaConnectRequest {

public:
    UpdateFlowRequest(const UpdateFlowRequest &other);
    UpdateFlowRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateFlowRequest)

};

} // namespace MediaConnect
} // namespace QtAws

#endif
