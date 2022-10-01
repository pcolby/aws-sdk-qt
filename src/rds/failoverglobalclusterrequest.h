// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_FAILOVERGLOBALCLUSTERREQUEST_H
#define QTAWS_FAILOVERGLOBALCLUSTERREQUEST_H

#include "rdsrequest.h"

namespace QtAws {
namespace Rds {

class FailoverGlobalClusterRequestPrivate;

class QTAWSRDS_EXPORT FailoverGlobalClusterRequest : public RdsRequest {

public:
    FailoverGlobalClusterRequest(const FailoverGlobalClusterRequest &other);
    FailoverGlobalClusterRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(FailoverGlobalClusterRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
