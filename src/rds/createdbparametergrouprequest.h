// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDBPARAMETERGROUPREQUEST_H
#define QTAWS_CREATEDBPARAMETERGROUPREQUEST_H

#include "rdsrequest.h"

namespace QtAws {
namespace Rds {

class CreateDBParameterGroupRequestPrivate;

class QTAWSRDS_EXPORT CreateDBParameterGroupRequest : public RdsRequest {

public:
    CreateDBParameterGroupRequest(const CreateDBParameterGroupRequest &other);
    CreateDBParameterGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDBParameterGroupRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
