// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESTUDIOREQUEST_P_H
#define QTAWS_UPDATESTUDIOREQUEST_P_H

#include "emrrequest_p.h"
#include "updatestudiorequest.h"

namespace QtAws {
namespace Emr {

class UpdateStudioRequest;

class UpdateStudioRequestPrivate : public EmrRequestPrivate {

public:
    UpdateStudioRequestPrivate(const EmrRequest::Action action,
                                   UpdateStudioRequest * const q);
    UpdateStudioRequestPrivate(const UpdateStudioRequestPrivate &other,
                                   UpdateStudioRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateStudioRequest)

};

} // namespace Emr
} // namespace QtAws

#endif
