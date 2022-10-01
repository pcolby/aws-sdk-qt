// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTSTREAMPROCESSORREQUEST_P_H
#define QTAWS_STARTSTREAMPROCESSORREQUEST_P_H

#include "rekognitionrequest_p.h"
#include "startstreamprocessorrequest.h"

namespace QtAws {
namespace Rekognition {

class StartStreamProcessorRequest;

class StartStreamProcessorRequestPrivate : public RekognitionRequestPrivate {

public:
    StartStreamProcessorRequestPrivate(const RekognitionRequest::Action action,
                                   StartStreamProcessorRequest * const q);
    StartStreamProcessorRequestPrivate(const StartStreamProcessorRequestPrivate &other,
                                   StartStreamProcessorRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartStreamProcessorRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif
