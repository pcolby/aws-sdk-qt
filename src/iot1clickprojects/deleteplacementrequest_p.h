// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPLACEMENTREQUEST_P_H
#define QTAWS_DELETEPLACEMENTREQUEST_P_H

#include "iot1clickprojectsrequest_p.h"
#include "deleteplacementrequest.h"

namespace QtAws {
namespace IoT1ClickProjects {

class DeletePlacementRequest;

class DeletePlacementRequestPrivate : public IoT1ClickProjectsRequestPrivate {

public:
    DeletePlacementRequestPrivate(const IoT1ClickProjectsRequest::Action action,
                                   DeletePlacementRequest * const q);
    DeletePlacementRequestPrivate(const DeletePlacementRequestPrivate &other,
                                   DeletePlacementRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeletePlacementRequest)

};

} // namespace IoT1ClickProjects
} // namespace QtAws

#endif
