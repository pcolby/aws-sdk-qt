// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERTASKDEFINITIONREQUEST_H
#define QTAWS_REGISTERTASKDEFINITIONREQUEST_H

#include "ecsrequest.h"

namespace QtAws {
namespace Ecs {

class RegisterTaskDefinitionRequestPrivate;

class QTAWSECS_EXPORT RegisterTaskDefinitionRequest : public EcsRequest {

public:
    RegisterTaskDefinitionRequest(const RegisterTaskDefinitionRequest &other);
    RegisterTaskDefinitionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterTaskDefinitionRequest)

};

} // namespace Ecs
} // namespace QtAws

#endif
