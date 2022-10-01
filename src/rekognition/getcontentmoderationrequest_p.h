// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONTENTMODERATIONREQUEST_P_H
#define QTAWS_GETCONTENTMODERATIONREQUEST_P_H

#include "rekognitionrequest_p.h"
#include "getcontentmoderationrequest.h"

namespace QtAws {
namespace Rekognition {

class GetContentModerationRequest;

class GetContentModerationRequestPrivate : public RekognitionRequestPrivate {

public:
    GetContentModerationRequestPrivate(const RekognitionRequest::Action action,
                                   GetContentModerationRequest * const q);
    GetContentModerationRequestPrivate(const GetContentModerationRequestPrivate &other,
                                   GetContentModerationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetContentModerationRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif
