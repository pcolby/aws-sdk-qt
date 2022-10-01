// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYDBCLUSTERREQUEST_H
#define QTAWS_MODIFYDBCLUSTERREQUEST_H

#include "rdsrequest.h"

namespace QtAws {
namespace Rds {

class ModifyDBClusterRequestPrivate;

class QTAWSRDS_EXPORT ModifyDBClusterRequest : public RdsRequest {

public:
    ModifyDBClusterRequest(const ModifyDBClusterRequest &other);
    ModifyDBClusterRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyDBClusterRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
