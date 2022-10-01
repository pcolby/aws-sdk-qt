// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDBSECURITYGROUPREQUEST_H
#define QTAWS_DELETEDBSECURITYGROUPREQUEST_H

#include "rdsrequest.h"

namespace QtAws {
namespace Rds {

class DeleteDBSecurityGroupRequestPrivate;

class QTAWSRDS_EXPORT DeleteDBSecurityGroupRequest : public RdsRequest {

public:
    DeleteDBSecurityGroupRequest(const DeleteDBSecurityGroupRequest &other);
    DeleteDBSecurityGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDBSecurityGroupRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
