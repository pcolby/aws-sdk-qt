// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFRAUDSTERREQUEST_P_H
#define QTAWS_DELETEFRAUDSTERREQUEST_P_H

#include "voiceidrequest_p.h"
#include "deletefraudsterrequest.h"

namespace QtAws {
namespace VoiceId {

class DeleteFraudsterRequest;

class DeleteFraudsterRequestPrivate : public VoiceIdRequestPrivate {

public:
    DeleteFraudsterRequestPrivate(const VoiceIdRequest::Action action,
                                   DeleteFraudsterRequest * const q);
    DeleteFraudsterRequestPrivate(const DeleteFraudsterRequestPrivate &other,
                                   DeleteFraudsterRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteFraudsterRequest)

};

} // namespace VoiceId
} // namespace QtAws

#endif
