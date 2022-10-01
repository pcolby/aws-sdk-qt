// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAGENTREQUEST_H
#define QTAWS_DELETEAGENTREQUEST_H

#include "datasyncrequest.h"

namespace QtAws {
namespace DataSync {

class DeleteAgentRequestPrivate;

class QTAWSDATASYNC_EXPORT DeleteAgentRequest : public DataSyncRequest {

public:
    DeleteAgentRequest(const DeleteAgentRequest &other);
    DeleteAgentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAgentRequest)

};

} // namespace DataSync
} // namespace QtAws

#endif
