// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDBCLUSTERPARAMETERGROUPREQUEST_H
#define QTAWS_DELETEDBCLUSTERPARAMETERGROUPREQUEST_H

#include "rdsrequest.h"

namespace QtAws {
namespace Rds {

class DeleteDBClusterParameterGroupRequestPrivate;

class QTAWSRDS_EXPORT DeleteDBClusterParameterGroupRequest : public RdsRequest {

public:
    DeleteDBClusterParameterGroupRequest(const DeleteDBClusterParameterGroupRequest &other);
    DeleteDBClusterParameterGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDBClusterParameterGroupRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
