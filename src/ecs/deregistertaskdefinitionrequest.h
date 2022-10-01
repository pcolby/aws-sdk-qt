// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERTASKDEFINITIONREQUEST_H
#define QTAWS_DEREGISTERTASKDEFINITIONREQUEST_H

#include "ecsrequest.h"

namespace QtAws {
namespace Ecs {

class DeregisterTaskDefinitionRequestPrivate;

class QTAWSECS_EXPORT DeregisterTaskDefinitionRequest : public EcsRequest {

public:
    DeregisterTaskDefinitionRequest(const DeregisterTaskDefinitionRequest &other);
    DeregisterTaskDefinitionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeregisterTaskDefinitionRequest)

};

} // namespace Ecs
} // namespace QtAws

#endif
