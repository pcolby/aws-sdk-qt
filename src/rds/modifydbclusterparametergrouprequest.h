// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYDBCLUSTERPARAMETERGROUPREQUEST_H
#define QTAWS_MODIFYDBCLUSTERPARAMETERGROUPREQUEST_H

#include "rdsrequest.h"

namespace QtAws {
namespace Rds {

class ModifyDBClusterParameterGroupRequestPrivate;

class QTAWSRDS_EXPORT ModifyDBClusterParameterGroupRequest : public RdsRequest {

public:
    ModifyDBClusterParameterGroupRequest(const ModifyDBClusterParameterGroupRequest &other);
    ModifyDBClusterParameterGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyDBClusterParameterGroupRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
