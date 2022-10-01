// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPLACEMENTREQUEST_P_H
#define QTAWS_CREATEPLACEMENTREQUEST_P_H

#include "iot1clickprojectsrequest_p.h"
#include "createplacementrequest.h"

namespace QtAws {
namespace IoT1ClickProjects {

class CreatePlacementRequest;

class CreatePlacementRequestPrivate : public IoT1ClickProjectsRequestPrivate {

public:
    CreatePlacementRequestPrivate(const IoT1ClickProjectsRequest::Action action,
                                   CreatePlacementRequest * const q);
    CreatePlacementRequestPrivate(const CreatePlacementRequestPrivate &other,
                                   CreatePlacementRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreatePlacementRequest)

};

} // namespace IoT1ClickProjects
} // namespace QtAws

#endif
