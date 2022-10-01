// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COPYDBCLUSTERPARAMETERGROUPREQUEST_H
#define QTAWS_COPYDBCLUSTERPARAMETERGROUPREQUEST_H

#include "rdsrequest.h"

namespace QtAws {
namespace Rds {

class CopyDBClusterParameterGroupRequestPrivate;

class QTAWSRDS_EXPORT CopyDBClusterParameterGroupRequest : public RdsRequest {

public:
    CopyDBClusterParameterGroupRequest(const CopyDBClusterParameterGroupRequest &other);
    CopyDBClusterParameterGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CopyDBClusterParameterGroupRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
