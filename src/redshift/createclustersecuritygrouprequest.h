// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECLUSTERSECURITYGROUPREQUEST_H
#define QTAWS_CREATECLUSTERSECURITYGROUPREQUEST_H

#include "redshiftrequest.h"

namespace QtAws {
namespace Redshift {

class CreateClusterSecurityGroupRequestPrivate;

class QTAWSREDSHIFT_EXPORT CreateClusterSecurityGroupRequest : public RedshiftRequest {

public:
    CreateClusterSecurityGroupRequest(const CreateClusterSecurityGroupRequest &other);
    CreateClusterSecurityGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateClusterSecurityGroupRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
