// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECLUSTERSECURITYGROUPREQUEST_H
#define QTAWS_DELETECLUSTERSECURITYGROUPREQUEST_H

#include "redshiftrequest.h"

namespace QtAws {
namespace Redshift {

class DeleteClusterSecurityGroupRequestPrivate;

class QTAWSREDSHIFT_EXPORT DeleteClusterSecurityGroupRequest : public RedshiftRequest {

public:
    DeleteClusterSecurityGroupRequest(const DeleteClusterSecurityGroupRequest &other);
    DeleteClusterSecurityGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteClusterSecurityGroupRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
