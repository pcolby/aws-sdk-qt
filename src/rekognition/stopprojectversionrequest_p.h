// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPPROJECTVERSIONREQUEST_P_H
#define QTAWS_STOPPROJECTVERSIONREQUEST_P_H

#include "rekognitionrequest_p.h"
#include "stopprojectversionrequest.h"

namespace QtAws {
namespace Rekognition {

class StopProjectVersionRequest;

class StopProjectVersionRequestPrivate : public RekognitionRequestPrivate {

public:
    StopProjectVersionRequestPrivate(const RekognitionRequest::Action action,
                                   StopProjectVersionRequest * const q);
    StopProjectVersionRequestPrivate(const StopProjectVersionRequestPrivate &other,
                                   StopProjectVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopProjectVersionRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif
