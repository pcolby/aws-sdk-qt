// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESTUDIOREQUEST_P_H
#define QTAWS_CREATESTUDIOREQUEST_P_H

#include "emrrequest_p.h"
#include "createstudiorequest.h"

namespace QtAws {
namespace Emr {

class CreateStudioRequest;

class CreateStudioRequestPrivate : public EmrRequestPrivate {

public:
    CreateStudioRequestPrivate(const EmrRequest::Action action,
                                   CreateStudioRequest * const q);
    CreateStudioRequestPrivate(const CreateStudioRequestPrivate &other,
                                   CreateStudioRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateStudioRequest)

};

} // namespace Emr
} // namespace QtAws

#endif
