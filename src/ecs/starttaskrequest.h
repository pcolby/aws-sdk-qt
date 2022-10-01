// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTTASKREQUEST_H
#define QTAWS_STARTTASKREQUEST_H

#include "ecsrequest.h"

namespace QtAws {
namespace Ecs {

class StartTaskRequestPrivate;

class QTAWSECS_EXPORT StartTaskRequest : public EcsRequest {

public:
    StartTaskRequest(const StartTaskRequest &other);
    StartTaskRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartTaskRequest)

};

} // namespace Ecs
} // namespace QtAws

#endif
