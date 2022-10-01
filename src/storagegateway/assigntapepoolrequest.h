// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSIGNTAPEPOOLREQUEST_H
#define QTAWS_ASSIGNTAPEPOOLREQUEST_H

#include "storagegatewayrequest.h"

namespace QtAws {
namespace StorageGateway {

class AssignTapePoolRequestPrivate;

class QTAWSSTORAGEGATEWAY_EXPORT AssignTapePoolRequest : public StorageGatewayRequest {

public:
    AssignTapePoolRequest(const AssignTapePoolRequest &other);
    AssignTapePoolRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssignTapePoolRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
