// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPACKAGINGCONFIGURATIONSREQUEST_H
#define QTAWS_LISTPACKAGINGCONFIGURATIONSREQUEST_H

#include "mediapackagevodrequest.h"

namespace QtAws {
namespace MediaPackageVod {

class ListPackagingConfigurationsRequestPrivate;

class QTAWSMEDIAPACKAGEVOD_EXPORT ListPackagingConfigurationsRequest : public MediaPackageVodRequest {

public:
    ListPackagingConfigurationsRequest(const ListPackagingConfigurationsRequest &other);
    ListPackagingConfigurationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPackagingConfigurationsRequest)

};

} // namespace MediaPackageVod
} // namespace QtAws

#endif
