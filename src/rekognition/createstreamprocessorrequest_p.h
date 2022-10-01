// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESTREAMPROCESSORREQUEST_P_H
#define QTAWS_CREATESTREAMPROCESSORREQUEST_P_H

#include "rekognitionrequest_p.h"
#include "createstreamprocessorrequest.h"

namespace QtAws {
namespace Rekognition {

class CreateStreamProcessorRequest;

class CreateStreamProcessorRequestPrivate : public RekognitionRequestPrivate {

public:
    CreateStreamProcessorRequestPrivate(const RekognitionRequest::Action action,
                                   CreateStreamProcessorRequest * const q);
    CreateStreamProcessorRequestPrivate(const CreateStreamProcessorRequestPrivate &other,
                                   CreateStreamProcessorRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateStreamProcessorRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif
