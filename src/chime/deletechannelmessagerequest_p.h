// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECHANNELMESSAGEREQUEST_P_H
#define QTAWS_DELETECHANNELMESSAGEREQUEST_P_H

#include "chimerequest_p.h"
#include "deletechannelmessagerequest.h"

namespace QtAws {
namespace Chime {

class DeleteChannelMessageRequest;

class DeleteChannelMessageRequestPrivate : public ChimeRequestPrivate {

public:
    DeleteChannelMessageRequestPrivate(const ChimeRequest::Action action,
                                   DeleteChannelMessageRequest * const q);
    DeleteChannelMessageRequestPrivate(const DeleteChannelMessageRequestPrivate &other,
                                   DeleteChannelMessageRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteChannelMessageRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
