// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCELEBRITYRECOGNITIONREQUEST_P_H
#define QTAWS_GETCELEBRITYRECOGNITIONREQUEST_P_H

#include "rekognitionrequest_p.h"
#include "getcelebrityrecognitionrequest.h"

namespace QtAws {
namespace Rekognition {

class GetCelebrityRecognitionRequest;

class GetCelebrityRecognitionRequestPrivate : public RekognitionRequestPrivate {

public:
    GetCelebrityRecognitionRequestPrivate(const RekognitionRequest::Action action,
                                   GetCelebrityRecognitionRequest * const q);
    GetCelebrityRecognitionRequestPrivate(const GetCelebrityRecognitionRequestPrivate &other,
                                   GetCelebrityRecognitionRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetCelebrityRecognitionRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif
