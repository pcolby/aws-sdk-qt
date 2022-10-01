// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYCURRENTDBCLUSTERCAPACITYREQUEST_H
#define QTAWS_MODIFYCURRENTDBCLUSTERCAPACITYREQUEST_H

#include "rdsrequest.h"

namespace QtAws {
namespace Rds {

class ModifyCurrentDBClusterCapacityRequestPrivate;

class QTAWSRDS_EXPORT ModifyCurrentDBClusterCapacityRequest : public RdsRequest {

public:
    ModifyCurrentDBClusterCapacityRequest(const ModifyCurrentDBClusterCapacityRequest &other);
    ModifyCurrentDBClusterCapacityRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyCurrentDBClusterCapacityRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
