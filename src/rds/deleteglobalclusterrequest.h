// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEGLOBALCLUSTERREQUEST_H
#define QTAWS_DELETEGLOBALCLUSTERREQUEST_H

#include "rdsrequest.h"

namespace QtAws {
namespace Rds {

class DeleteGlobalClusterRequestPrivate;

class QTAWSRDS_EXPORT DeleteGlobalClusterRequest : public RdsRequest {

public:
    DeleteGlobalClusterRequest(const DeleteGlobalClusterRequest &other);
    DeleteGlobalClusterRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteGlobalClusterRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
