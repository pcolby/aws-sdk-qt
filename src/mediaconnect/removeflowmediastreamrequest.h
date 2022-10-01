// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEFLOWMEDIASTREAMREQUEST_H
#define QTAWS_REMOVEFLOWMEDIASTREAMREQUEST_H

#include "mediaconnectrequest.h"

namespace QtAws {
namespace MediaConnect {

class RemoveFlowMediaStreamRequestPrivate;

class QTAWSMEDIACONNECT_EXPORT RemoveFlowMediaStreamRequest : public MediaConnectRequest {

public:
    RemoveFlowMediaStreamRequest(const RemoveFlowMediaStreamRequest &other);
    RemoveFlowMediaStreamRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RemoveFlowMediaStreamRequest)

};

} // namespace MediaConnect
} // namespace QtAws

#endif
