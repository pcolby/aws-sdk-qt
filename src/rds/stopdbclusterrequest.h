// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPDBCLUSTERREQUEST_H
#define QTAWS_STOPDBCLUSTERREQUEST_H

#include "rdsrequest.h"

namespace QtAws {
namespace Rds {

class StopDBClusterRequestPrivate;

class QTAWSRDS_EXPORT StopDBClusterRequest : public RdsRequest {

public:
    StopDBClusterRequest(const StopDBClusterRequest &other);
    StopDBClusterRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopDBClusterRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
