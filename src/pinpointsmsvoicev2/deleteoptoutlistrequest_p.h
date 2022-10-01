// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEOPTOUTLISTREQUEST_P_H
#define QTAWS_DELETEOPTOUTLISTREQUEST_P_H

#include "pinpointsmsvoicev2request_p.h"
#include "deleteoptoutlistrequest.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class DeleteOptOutListRequest;

class DeleteOptOutListRequestPrivate : public PinpointSmsVoiceV2RequestPrivate {

public:
    DeleteOptOutListRequestPrivate(const PinpointSmsVoiceV2Request::Action action,
                                   DeleteOptOutListRequest * const q);
    DeleteOptOutListRequestPrivate(const DeleteOptOutListRequestPrivate &other,
                                   DeleteOptOutListRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteOptOutListRequest)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
