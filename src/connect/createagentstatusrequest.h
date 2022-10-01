// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAGENTSTATUSREQUEST_H
#define QTAWS_CREATEAGENTSTATUSREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class CreateAgentStatusRequestPrivate;

class QTAWSCONNECT_EXPORT CreateAgentStatusRequest : public ConnectRequest {

public:
    CreateAgentStatusRequest(const CreateAgentStatusRequest &other);
    CreateAgentStatusRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAgentStatusRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
