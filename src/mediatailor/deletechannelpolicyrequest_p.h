// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECHANNELPOLICYREQUEST_P_H
#define QTAWS_DELETECHANNELPOLICYREQUEST_P_H

#include "mediatailorrequest_p.h"
#include "deletechannelpolicyrequest.h"

namespace QtAws {
namespace MediaTailor {

class DeleteChannelPolicyRequest;

class DeleteChannelPolicyRequestPrivate : public MediaTailorRequestPrivate {

public:
    DeleteChannelPolicyRequestPrivate(const MediaTailorRequest::Action action,
                                   DeleteChannelPolicyRequest * const q);
    DeleteChannelPolicyRequestPrivate(const DeleteChannelPolicyRequestPrivate &other,
                                   DeleteChannelPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteChannelPolicyRequest)

};

} // namespace MediaTailor
} // namespace QtAws

#endif
