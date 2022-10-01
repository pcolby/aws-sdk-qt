// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTFLOWREQUEST_H
#define QTAWS_STARTFLOWREQUEST_H

#include "mediaconnectrequest.h"

namespace QtAws {
namespace MediaConnect {

class StartFlowRequestPrivate;

class QTAWSMEDIACONNECT_EXPORT StartFlowRequest : public MediaConnectRequest {

public:
    StartFlowRequest(const StartFlowRequest &other);
    StartFlowRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartFlowRequest)

};

} // namespace MediaConnect
} // namespace QtAws

#endif
