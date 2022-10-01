// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESTREAMPROCESSORREQUEST_P_H
#define QTAWS_DELETESTREAMPROCESSORREQUEST_P_H

#include "rekognitionrequest_p.h"
#include "deletestreamprocessorrequest.h"

namespace QtAws {
namespace Rekognition {

class DeleteStreamProcessorRequest;

class DeleteStreamProcessorRequestPrivate : public RekognitionRequestPrivate {

public:
    DeleteStreamProcessorRequestPrivate(const RekognitionRequest::Action action,
                                   DeleteStreamProcessorRequest * const q);
    DeleteStreamProcessorRequestPrivate(const DeleteStreamProcessorRequestPrivate &other,
                                   DeleteStreamProcessorRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteStreamProcessorRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif
