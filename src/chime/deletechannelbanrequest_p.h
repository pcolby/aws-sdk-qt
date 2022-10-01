// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECHANNELBANREQUEST_P_H
#define QTAWS_DELETECHANNELBANREQUEST_P_H

#include "chimerequest_p.h"
#include "deletechannelbanrequest.h"

namespace QtAws {
namespace Chime {

class DeleteChannelBanRequest;

class DeleteChannelBanRequestPrivate : public ChimeRequestPrivate {

public:
    DeleteChannelBanRequestPrivate(const ChimeRequest::Action action,
                                   DeleteChannelBanRequest * const q);
    DeleteChannelBanRequestPrivate(const DeleteChannelBanRequestPrivate &other,
                                   DeleteChannelBanRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteChannelBanRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
