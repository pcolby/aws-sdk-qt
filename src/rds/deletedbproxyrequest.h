// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDBPROXYREQUEST_H
#define QTAWS_DELETEDBPROXYREQUEST_H

#include "rdsrequest.h"

namespace QtAws {
namespace Rds {

class DeleteDBProxyRequestPrivate;

class QTAWSRDS_EXPORT DeleteDBProxyRequest : public RdsRequest {

public:
    DeleteDBProxyRequest(const DeleteDBProxyRequest &other);
    DeleteDBProxyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDBProxyRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
