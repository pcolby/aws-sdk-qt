// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECLUSTERREQUEST_H
#define QTAWS_DELETECLUSTERREQUEST_H

#include "ecsrequest.h"

namespace QtAws {
namespace Ecs {

class DeleteClusterRequestPrivate;

class QTAWSECS_EXPORT DeleteClusterRequest : public EcsRequest {

public:
    DeleteClusterRequest(const DeleteClusterRequest &other);
    DeleteClusterRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteClusterRequest)

};

} // namespace Ecs
} // namespace QtAws

#endif
