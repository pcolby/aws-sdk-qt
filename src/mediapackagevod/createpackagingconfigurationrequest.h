// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPACKAGINGCONFIGURATIONREQUEST_H
#define QTAWS_CREATEPACKAGINGCONFIGURATIONREQUEST_H

#include "mediapackagevodrequest.h"

namespace QtAws {
namespace MediaPackageVod {

class CreatePackagingConfigurationRequestPrivate;

class QTAWSMEDIAPACKAGEVOD_EXPORT CreatePackagingConfigurationRequest : public MediaPackageVodRequest {

public:
    CreatePackagingConfigurationRequest(const CreatePackagingConfigurationRequest &other);
    CreatePackagingConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreatePackagingConfigurationRequest)

};

} // namespace MediaPackageVod
} // namespace QtAws

#endif
