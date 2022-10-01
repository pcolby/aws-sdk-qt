// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGATEWAYSREQUEST_H
#define QTAWS_LISTGATEWAYSREQUEST_H

#include "backupgatewayrequest.h"

namespace QtAws {
namespace BackupGateway {

class ListGatewaysRequestPrivate;

class QTAWSBACKUPGATEWAY_EXPORT ListGatewaysRequest : public BackupGatewayRequest {

public:
    ListGatewaysRequest(const ListGatewaysRequest &other);
    ListGatewaysRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListGatewaysRequest)

};

} // namespace BackupGateway
} // namespace QtAws

#endif
