// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BACKTRACKDBCLUSTERREQUEST_H
#define QTAWS_BACKTRACKDBCLUSTERREQUEST_H

#include "rdsrequest.h"

namespace QtAws {
namespace Rds {

class BacktrackDBClusterRequestPrivate;

class QTAWSRDS_EXPORT BacktrackDBClusterRequest : public RdsRequest {

public:
    BacktrackDBClusterRequest(const BacktrackDBClusterRequest &other);
    BacktrackDBClusterRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BacktrackDBClusterRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
