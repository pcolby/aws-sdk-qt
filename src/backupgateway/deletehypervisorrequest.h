// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEHYPERVISORREQUEST_H
#define QTAWS_DELETEHYPERVISORREQUEST_H

#include "backupgatewayrequest.h"

namespace QtAws {
namespace BackupGateway {

class DeleteHypervisorRequestPrivate;

class QTAWSBACKUPGATEWAY_EXPORT DeleteHypervisorRequest : public BackupGatewayRequest {

public:
    DeleteHypervisorRequest(const DeleteHypervisorRequest &other);
    DeleteHypervisorRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteHypervisorRequest)

};

} // namespace BackupGateway
} // namespace QtAws

#endif
