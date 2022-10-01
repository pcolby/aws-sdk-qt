// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESERVICEREQUEST_H
#define QTAWS_DELETESERVICEREQUEST_H

#include "ecsrequest.h"

namespace QtAws {
namespace Ecs {

class DeleteServiceRequestPrivate;

class QTAWSECS_EXPORT DeleteServiceRequest : public EcsRequest {

public:
    DeleteServiceRequest(const DeleteServiceRequest &other);
    DeleteServiceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteServiceRequest)

};

} // namespace Ecs
} // namespace QtAws

#endif
