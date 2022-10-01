// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETASKSETREQUEST_H
#define QTAWS_DELETETASKSETREQUEST_H

#include "ecsrequest.h"

namespace QtAws {
namespace Ecs {

class DeleteTaskSetRequestPrivate;

class QTAWSECS_EXPORT DeleteTaskSetRequest : public EcsRequest {

public:
    DeleteTaskSetRequest(const DeleteTaskSetRequest &other);
    DeleteTaskSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteTaskSetRequest)

};

} // namespace Ecs
} // namespace QtAws

#endif
