// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPFLOWREQUEST_H
#define QTAWS_STOPFLOWREQUEST_H

#include "mediaconnectrequest.h"

namespace QtAws {
namespace MediaConnect {

class StopFlowRequestPrivate;

class QTAWSMEDIACONNECT_EXPORT StopFlowRequest : public MediaConnectRequest {

public:
    StopFlowRequest(const StopFlowRequest &other);
    StopFlowRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopFlowRequest)

};

} // namespace MediaConnect
} // namespace QtAws

#endif
