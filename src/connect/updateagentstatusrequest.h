// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAGENTSTATUSREQUEST_H
#define QTAWS_UPDATEAGENTSTATUSREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class UpdateAgentStatusRequestPrivate;

class QTAWSCONNECT_EXPORT UpdateAgentStatusRequest : public ConnectRequest {

public:
    UpdateAgentStatusRequest(const UpdateAgentStatusRequest &other);
    UpdateAgentStatusRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAgentStatusRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
