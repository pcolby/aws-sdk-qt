// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESETDBPARAMETERGROUPREQUEST_H
#define QTAWS_RESETDBPARAMETERGROUPREQUEST_H

#include "rdsrequest.h"

namespace QtAws {
namespace Rds {

class ResetDBParameterGroupRequestPrivate;

class QTAWSRDS_EXPORT ResetDBParameterGroupRequest : public RdsRequest {

public:
    ResetDBParameterGroupRequest(const ResetDBParameterGroupRequest &other);
    ResetDBParameterGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ResetDBParameterGroupRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
