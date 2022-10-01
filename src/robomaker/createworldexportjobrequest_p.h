// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWORLDEXPORTJOBREQUEST_P_H
#define QTAWS_CREATEWORLDEXPORTJOBREQUEST_P_H

#include "robomakerrequest_p.h"
#include "createworldexportjobrequest.h"

namespace QtAws {
namespace RoboMaker {

class CreateWorldExportJobRequest;

class CreateWorldExportJobRequestPrivate : public RoboMakerRequestPrivate {

public:
    CreateWorldExportJobRequestPrivate(const RoboMakerRequest::Action action,
                                   CreateWorldExportJobRequest * const q);
    CreateWorldExportJobRequestPrivate(const CreateWorldExportJobRequestPrivate &other,
                                   CreateWorldExportJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateWorldExportJobRequest)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
