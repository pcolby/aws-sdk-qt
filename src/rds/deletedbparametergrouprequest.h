// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDBPARAMETERGROUPREQUEST_H
#define QTAWS_DELETEDBPARAMETERGROUPREQUEST_H

#include "rdsrequest.h"

namespace QtAws {
namespace Rds {

class DeleteDBParameterGroupRequestPrivate;

class QTAWSRDS_EXPORT DeleteDBParameterGroupRequest : public RdsRequest {

public:
    DeleteDBParameterGroupRequest(const DeleteDBParameterGroupRequest &other);
    DeleteDBParameterGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDBParameterGroupRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
