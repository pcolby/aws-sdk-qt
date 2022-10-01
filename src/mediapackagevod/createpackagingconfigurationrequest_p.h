// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPACKAGINGCONFIGURATIONREQUEST_P_H
#define QTAWS_CREATEPACKAGINGCONFIGURATIONREQUEST_P_H

#include "mediapackagevodrequest_p.h"
#include "createpackagingconfigurationrequest.h"

namespace QtAws {
namespace MediaPackageVod {

class CreatePackagingConfigurationRequest;

class CreatePackagingConfigurationRequestPrivate : public MediaPackageVodRequestPrivate {

public:
    CreatePackagingConfigurationRequestPrivate(const MediaPackageVodRequest::Action action,
                                   CreatePackagingConfigurationRequest * const q);
    CreatePackagingConfigurationRequestPrivate(const CreatePackagingConfigurationRequestPrivate &other,
                                   CreatePackagingConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreatePackagingConfigurationRequest)

};

} // namespace MediaPackageVod
} // namespace QtAws

#endif
