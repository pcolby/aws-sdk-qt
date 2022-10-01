// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPACKAGINGCONFIGURATIONREQUEST_P_H
#define QTAWS_DELETEPACKAGINGCONFIGURATIONREQUEST_P_H

#include "mediapackagevodrequest_p.h"
#include "deletepackagingconfigurationrequest.h"

namespace QtAws {
namespace MediaPackageVod {

class DeletePackagingConfigurationRequest;

class DeletePackagingConfigurationRequestPrivate : public MediaPackageVodRequestPrivate {

public:
    DeletePackagingConfigurationRequestPrivate(const MediaPackageVodRequest::Action action,
                                   DeletePackagingConfigurationRequest * const q);
    DeletePackagingConfigurationRequestPrivate(const DeletePackagingConfigurationRequestPrivate &other,
                                   DeletePackagingConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeletePackagingConfigurationRequest)

};

} // namespace MediaPackageVod
} // namespace QtAws

#endif
