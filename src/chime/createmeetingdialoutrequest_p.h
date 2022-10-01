// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMEETINGDIALOUTREQUEST_P_H
#define QTAWS_CREATEMEETINGDIALOUTREQUEST_P_H

#include "chimerequest_p.h"
#include "createmeetingdialoutrequest.h"

namespace QtAws {
namespace Chime {

class CreateMeetingDialOutRequest;

class CreateMeetingDialOutRequestPrivate : public ChimeRequestPrivate {

public:
    CreateMeetingDialOutRequestPrivate(const ChimeRequest::Action action,
                                   CreateMeetingDialOutRequest * const q);
    CreateMeetingDialOutRequestPrivate(const CreateMeetingDialOutRequestPrivate &other,
                                   CreateMeetingDialOutRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateMeetingDialOutRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
