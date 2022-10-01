// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTIMAGESCANNINGCONFIGURATIONREQUEST_P_H
#define QTAWS_PUTIMAGESCANNINGCONFIGURATIONREQUEST_P_H

#include "ecrrequest_p.h"
#include "putimagescanningconfigurationrequest.h"

namespace QtAws {
namespace Ecr {

class PutImageScanningConfigurationRequest;

class PutImageScanningConfigurationRequestPrivate : public EcrRequestPrivate {

public:
    PutImageScanningConfigurationRequestPrivate(const EcrRequest::Action action,
                                   PutImageScanningConfigurationRequest * const q);
    PutImageScanningConfigurationRequestPrivate(const PutImageScanningConfigurationRequestPrivate &other,
                                   PutImageScanningConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutImageScanningConfigurationRequest)

};

} // namespace Ecr
} // namespace QtAws

#endif
