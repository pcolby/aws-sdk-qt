// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESTREAMPROCESSORREQUEST_P_H
#define QTAWS_UPDATESTREAMPROCESSORREQUEST_P_H

#include "rekognitionrequest_p.h"
#include "updatestreamprocessorrequest.h"

namespace QtAws {
namespace Rekognition {

class UpdateStreamProcessorRequest;

class UpdateStreamProcessorRequestPrivate : public RekognitionRequestPrivate {

public:
    UpdateStreamProcessorRequestPrivate(const RekognitionRequest::Action action,
                                   UpdateStreamProcessorRequest * const q);
    UpdateStreamProcessorRequestPrivate(const UpdateStreamProcessorRequestPrivate &other,
                                   UpdateStreamProcessorRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateStreamProcessorRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif
