// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYDBPARAMETERGROUPREQUEST_H
#define QTAWS_MODIFYDBPARAMETERGROUPREQUEST_H

#include "rdsrequest.h"

namespace QtAws {
namespace Rds {

class ModifyDBParameterGroupRequestPrivate;

class QTAWSRDS_EXPORT ModifyDBParameterGroupRequest : public RdsRequest {

public:
    ModifyDBParameterGroupRequest(const ModifyDBParameterGroupRequest &other);
    ModifyDBParameterGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyDBParameterGroupRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
