// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPTASKREQUEST_H
#define QTAWS_STOPTASKREQUEST_H

#include "ecsrequest.h"

namespace QtAws {
namespace Ecs {

class StopTaskRequestPrivate;

class QTAWSECS_EXPORT StopTaskRequest : public EcsRequest {

public:
    StopTaskRequest(const StopTaskRequest &other);
    StopTaskRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopTaskRequest)

};

} // namespace Ecs
} // namespace QtAws

#endif
