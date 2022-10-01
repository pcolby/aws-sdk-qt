// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDHEARTBEATREQUEST_H
#define QTAWS_SENDHEARTBEATREQUEST_H

#include "sagemakeredgerequest.h"

namespace QtAws {
namespace SagemakerEdge {

class SendHeartbeatRequestPrivate;

class QTAWSSAGEMAKEREDGE_EXPORT SendHeartbeatRequest : public SagemakerEdgeRequest {

public:
    SendHeartbeatRequest(const SendHeartbeatRequest &other);
    SendHeartbeatRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SendHeartbeatRequest)

};

} // namespace SagemakerEdge
} // namespace QtAws

#endif
