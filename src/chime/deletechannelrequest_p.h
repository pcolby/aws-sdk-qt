// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECHANNELREQUEST_P_H
#define QTAWS_DELETECHANNELREQUEST_P_H

#include "chimerequest_p.h"
#include "deletechannelrequest.h"

namespace QtAws {
namespace Chime {

class DeleteChannelRequest;

class DeleteChannelRequestPrivate : public ChimeRequestPrivate {

public:
    DeleteChannelRequestPrivate(const ChimeRequest::Action action,
                                   DeleteChannelRequest * const q);
    DeleteChannelRequestPrivate(const DeleteChannelRequestPrivate &other,
                                   DeleteChannelRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteChannelRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
