// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONFIGREQUEST_P_H
#define QTAWS_CREATECONFIGREQUEST_P_H

#include "groundstationrequest_p.h"
#include "createconfigrequest.h"

namespace QtAws {
namespace GroundStation {

class CreateConfigRequest;

class CreateConfigRequestPrivate : public GroundStationRequestPrivate {

public:
    CreateConfigRequestPrivate(const GroundStationRequest::Action action,
                                   CreateConfigRequest * const q);
    CreateConfigRequestPrivate(const CreateConfigRequestPrivate &other,
                                   CreateConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateConfigRequest)

};

} // namespace GroundStation
} // namespace QtAws

#endif
