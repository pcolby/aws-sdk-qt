// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYGLOBALCLUSTERREQUEST_H
#define QTAWS_MODIFYGLOBALCLUSTERREQUEST_H

#include "rdsrequest.h"

namespace QtAws {
namespace Rds {

class ModifyGlobalClusterRequestPrivate;

class QTAWSRDS_EXPORT ModifyGlobalClusterRequest : public RdsRequest {

public:
    ModifyGlobalClusterRequest(const ModifyGlobalClusterRequest &other);
    ModifyGlobalClusterRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyGlobalClusterRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
