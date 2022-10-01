// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPLACEMENTREQUEST_P_H
#define QTAWS_UPDATEPLACEMENTREQUEST_P_H

#include "iot1clickprojectsrequest_p.h"
#include "updateplacementrequest.h"

namespace QtAws {
namespace IoT1ClickProjects {

class UpdatePlacementRequest;

class UpdatePlacementRequestPrivate : public IoT1ClickProjectsRequestPrivate {

public:
    UpdatePlacementRequestPrivate(const IoT1ClickProjectsRequest::Action action,
                                   UpdatePlacementRequest * const q);
    UpdatePlacementRequestPrivate(const UpdatePlacementRequestPrivate &other,
                                   UpdatePlacementRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdatePlacementRequest)

};

} // namespace IoT1ClickProjects
} // namespace QtAws

#endif
