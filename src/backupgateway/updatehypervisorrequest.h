// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEHYPERVISORREQUEST_H
#define QTAWS_UPDATEHYPERVISORREQUEST_H

#include "backupgatewayrequest.h"

namespace QtAws {
namespace BackupGateway {

class UpdateHypervisorRequestPrivate;

class QTAWSBACKUPGATEWAY_EXPORT UpdateHypervisorRequest : public BackupGatewayRequest {

public:
    UpdateHypervisorRequest(const UpdateHypervisorRequest &other);
    UpdateHypervisorRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateHypervisorRequest)

};

} // namespace BackupGateway
} // namespace QtAws

#endif
