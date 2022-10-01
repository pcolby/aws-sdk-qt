// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMULTIPLEXPROGRAMREQUEST_P_H
#define QTAWS_DELETEMULTIPLEXPROGRAMREQUEST_P_H

#include "medialiverequest_p.h"
#include "deletemultiplexprogramrequest.h"

namespace QtAws {
namespace MediaLive {

class DeleteMultiplexProgramRequest;

class DeleteMultiplexProgramRequestPrivate : public MediaLiveRequestPrivate {

public:
    DeleteMultiplexProgramRequestPrivate(const MediaLiveRequest::Action action,
                                   DeleteMultiplexProgramRequest * const q);
    DeleteMultiplexProgramRequestPrivate(const DeleteMultiplexProgramRequestPrivate &other,
                                   DeleteMultiplexProgramRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteMultiplexProgramRequest)

};

} // namespace MediaLive
} // namespace QtAws

#endif
