// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESERVICEPRIMARYTASKSETREQUEST_H
#define QTAWS_UPDATESERVICEPRIMARYTASKSETREQUEST_H

#include "ecsrequest.h"

namespace QtAws {
namespace Ecs {

class UpdateServicePrimaryTaskSetRequestPrivate;

class QTAWSECS_EXPORT UpdateServicePrimaryTaskSetRequest : public EcsRequest {

public:
    UpdateServicePrimaryTaskSetRequest(const UpdateServicePrimaryTaskSetRequest &other);
    UpdateServicePrimaryTaskSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateServicePrimaryTaskSetRequest)

};

} // namespace Ecs
} // namespace QtAws

#endif
