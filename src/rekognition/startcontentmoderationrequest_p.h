// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTCONTENTMODERATIONREQUEST_P_H
#define QTAWS_STARTCONTENTMODERATIONREQUEST_P_H

#include "rekognitionrequest_p.h"
#include "startcontentmoderationrequest.h"

namespace QtAws {
namespace Rekognition {

class StartContentModerationRequest;

class StartContentModerationRequestPrivate : public RekognitionRequestPrivate {

public:
    StartContentModerationRequestPrivate(const RekognitionRequest::Action action,
                                   StartContentModerationRequest * const q);
    StartContentModerationRequestPrivate(const StartContentModerationRequestPrivate &other,
                                   StartContentModerationRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartContentModerationRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif
