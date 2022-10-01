// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDBINSTANCEREQUEST_H
#define QTAWS_DELETEDBINSTANCEREQUEST_H

#include "rdsrequest.h"

namespace QtAws {
namespace Rds {

class DeleteDBInstanceRequestPrivate;

class QTAWSRDS_EXPORT DeleteDBInstanceRequest : public RdsRequest {

public:
    DeleteDBInstanceRequest(const DeleteDBInstanceRequest &other);
    DeleteDBInstanceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDBInstanceRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
