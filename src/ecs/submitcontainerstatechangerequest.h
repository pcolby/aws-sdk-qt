// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SUBMITCONTAINERSTATECHANGEREQUEST_H
#define QTAWS_SUBMITCONTAINERSTATECHANGEREQUEST_H

#include "ecsrequest.h"

namespace QtAws {
namespace Ecs {

class SubmitContainerStateChangeRequestPrivate;

class QTAWSECS_EXPORT SubmitContainerStateChangeRequest : public EcsRequest {

public:
    SubmitContainerStateChangeRequest(const SubmitContainerStateChangeRequest &other);
    SubmitContainerStateChangeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SubmitContainerStateChangeRequest)

};

} // namespace Ecs
} // namespace QtAws

#endif
