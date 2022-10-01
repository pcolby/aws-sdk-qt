// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDROLETODBCLUSTERREQUEST_H
#define QTAWS_ADDROLETODBCLUSTERREQUEST_H

#include "rdsrequest.h"

namespace QtAws {
namespace Rds {

class AddRoleToDBClusterRequestPrivate;

class QTAWSRDS_EXPORT AddRoleToDBClusterRequest : public RdsRequest {

public:
    AddRoleToDBClusterRequest(const AddRoleToDBClusterRequest &other);
    AddRoleToDBClusterRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AddRoleToDBClusterRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
