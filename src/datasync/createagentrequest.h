// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAGENTREQUEST_H
#define QTAWS_CREATEAGENTREQUEST_H

#include "datasyncrequest.h"

namespace QtAws {
namespace DataSync {

class CreateAgentRequestPrivate;

class QTAWSDATASYNC_EXPORT CreateAgentRequest : public DataSyncRequest {

public:
    CreateAgentRequest(const CreateAgentRequest &other);
    CreateAgentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAgentRequest)

};

} // namespace DataSync
} // namespace QtAws

#endif
