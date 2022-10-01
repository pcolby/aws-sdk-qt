// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEKEYWORDREQUEST_P_H
#define QTAWS_DELETEKEYWORDREQUEST_P_H

#include "pinpointsmsvoicev2request_p.h"
#include "deletekeywordrequest.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class DeleteKeywordRequest;

class DeleteKeywordRequestPrivate : public PinpointSmsVoiceV2RequestPrivate {

public:
    DeleteKeywordRequestPrivate(const PinpointSmsVoiceV2Request::Action action,
                                   DeleteKeywordRequest * const q);
    DeleteKeywordRequestPrivate(const DeleteKeywordRequestPrivate &other,
                                   DeleteKeywordRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteKeywordRequest)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
