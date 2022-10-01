// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTPROJECTVERSIONREQUEST_P_H
#define QTAWS_STARTPROJECTVERSIONREQUEST_P_H

#include "rekognitionrequest_p.h"
#include "startprojectversionrequest.h"

namespace QtAws {
namespace Rekognition {

class StartProjectVersionRequest;

class StartProjectVersionRequestPrivate : public RekognitionRequestPrivate {

public:
    StartProjectVersionRequestPrivate(const RekognitionRequest::Action action,
                                   StartProjectVersionRequest * const q);
    StartProjectVersionRequestPrivate(const StartProjectVersionRequestPrivate &other,
                                   StartProjectVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartProjectVersionRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif
