// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPACKAGINGCONFIGURATIONSREQUEST_P_H
#define QTAWS_LISTPACKAGINGCONFIGURATIONSREQUEST_P_H

#include "mediapackagevodrequest_p.h"
#include "listpackagingconfigurationsrequest.h"

namespace QtAws {
namespace MediaPackageVod {

class ListPackagingConfigurationsRequest;

class ListPackagingConfigurationsRequestPrivate : public MediaPackageVodRequestPrivate {

public:
    ListPackagingConfigurationsRequestPrivate(const MediaPackageVodRequest::Action action,
                                   ListPackagingConfigurationsRequest * const q);
    ListPackagingConfigurationsRequestPrivate(const ListPackagingConfigurationsRequestPrivate &other,
                                   ListPackagingConfigurationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListPackagingConfigurationsRequest)

};

} // namespace MediaPackageVod
} // namespace QtAws

#endif
