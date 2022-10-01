// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RECOGNIZECELEBRITIESREQUEST_P_H
#define QTAWS_RECOGNIZECELEBRITIESREQUEST_P_H

#include "rekognitionrequest_p.h"
#include "recognizecelebritiesrequest.h"

namespace QtAws {
namespace Rekognition {

class RecognizeCelebritiesRequest;

class RecognizeCelebritiesRequestPrivate : public RekognitionRequestPrivate {

public:
    RecognizeCelebritiesRequestPrivate(const RekognitionRequest::Action action,
                                   RecognizeCelebritiesRequest * const q);
    RecognizeCelebritiesRequestPrivate(const RecognizeCelebritiesRequestPrivate &other,
                                   RecognizeCelebritiesRequest * const q);

private:
    Q_DECLARE_PUBLIC(RecognizeCelebritiesRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif
