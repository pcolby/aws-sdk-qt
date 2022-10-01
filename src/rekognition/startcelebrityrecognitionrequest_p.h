// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTCELEBRITYRECOGNITIONREQUEST_P_H
#define QTAWS_STARTCELEBRITYRECOGNITIONREQUEST_P_H

#include "rekognitionrequest_p.h"
#include "startcelebrityrecognitionrequest.h"

namespace QtAws {
namespace Rekognition {

class StartCelebrityRecognitionRequest;

class StartCelebrityRecognitionRequestPrivate : public RekognitionRequestPrivate {

public:
    StartCelebrityRecognitionRequestPrivate(const RekognitionRequest::Action action,
                                   StartCelebrityRecognitionRequest * const q);
    StartCelebrityRecognitionRequestPrivate(const StartCelebrityRecognitionRequestPrivate &other,
                                   StartCelebrityRecognitionRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartCelebrityRecognitionRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif
