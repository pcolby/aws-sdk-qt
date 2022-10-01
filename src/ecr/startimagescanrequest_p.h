// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTIMAGESCANREQUEST_P_H
#define QTAWS_STARTIMAGESCANREQUEST_P_H

#include "ecrrequest_p.h"
#include "startimagescanrequest.h"

namespace QtAws {
namespace Ecr {

class StartImageScanRequest;

class StartImageScanRequestPrivate : public EcrRequestPrivate {

public:
    StartImageScanRequestPrivate(const EcrRequest::Action action,
                                   StartImageScanRequest * const q);
    StartImageScanRequestPrivate(const StartImageScanRequestPrivate &other,
                                   StartImageScanRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartImageScanRequest)

};

} // namespace Ecr
} // namespace QtAws

#endif
