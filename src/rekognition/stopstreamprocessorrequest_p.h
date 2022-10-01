// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPSTREAMPROCESSORREQUEST_P_H
#define QTAWS_STOPSTREAMPROCESSORREQUEST_P_H

#include "rekognitionrequest_p.h"
#include "stopstreamprocessorrequest.h"

namespace QtAws {
namespace Rekognition {

class StopStreamProcessorRequest;

class StopStreamProcessorRequestPrivate : public RekognitionRequestPrivate {

public:
    StopStreamProcessorRequestPrivate(const RekognitionRequest::Action action,
                                   StopStreamProcessorRequest * const q);
    StopStreamProcessorRequestPrivate(const StopStreamProcessorRequestPrivate &other,
                                   StopStreamProcessorRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopStreamProcessorRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif
