// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEROLEFROMDBCLUSTERREQUEST_H
#define QTAWS_REMOVEROLEFROMDBCLUSTERREQUEST_H

#include "rdsrequest.h"

namespace QtAws {
namespace Rds {

class RemoveRoleFromDBClusterRequestPrivate;

class QTAWSRDS_EXPORT RemoveRoleFromDBClusterRequest : public RdsRequest {

public:
    RemoveRoleFromDBClusterRequest(const RemoveRoleFromDBClusterRequest &other);
    RemoveRoleFromDBClusterRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RemoveRoleFromDBClusterRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
