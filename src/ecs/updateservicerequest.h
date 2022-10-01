// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESERVICEREQUEST_H
#define QTAWS_UPDATESERVICEREQUEST_H

#include "ecsrequest.h"

namespace QtAws {
namespace Ecs {

class UpdateServiceRequestPrivate;

class QTAWSECS_EXPORT UpdateServiceRequest : public EcsRequest {

public:
    UpdateServiceRequest(const UpdateServiceRequest &other);
    UpdateServiceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateServiceRequest)

};

} // namespace Ecs
} // namespace QtAws

#endif
