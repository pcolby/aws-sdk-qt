// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETASKSETREQUEST_H
#define QTAWS_CREATETASKSETREQUEST_H

#include "ecsrequest.h"

namespace QtAws {
namespace Ecs {

class CreateTaskSetRequestPrivate;

class QTAWSECS_EXPORT CreateTaskSetRequest : public EcsRequest {

public:
    CreateTaskSetRequest(const CreateTaskSetRequest &other);
    CreateTaskSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateTaskSetRequest)

};

} // namespace Ecs
} // namespace QtAws

#endif
