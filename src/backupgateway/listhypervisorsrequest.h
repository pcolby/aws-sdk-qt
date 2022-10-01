// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTHYPERVISORSREQUEST_H
#define QTAWS_LISTHYPERVISORSREQUEST_H

#include "backupgatewayrequest.h"

namespace QtAws {
namespace BackupGateway {

class ListHypervisorsRequestPrivate;

class QTAWSBACKUPGATEWAY_EXPORT ListHypervisorsRequest : public BackupGatewayRequest {

public:
    ListHypervisorsRequest(const ListHypervisorsRequest &other);
    ListHypervisorsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListHypervisorsRequest)

};

} // namespace BackupGateway
} // namespace QtAws

#endif
