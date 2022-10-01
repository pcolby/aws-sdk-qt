// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPACKAGINGCONFIGURATIONREQUEST_H
#define QTAWS_DELETEPACKAGINGCONFIGURATIONREQUEST_H

#include "mediapackagevodrequest.h"

namespace QtAws {
namespace MediaPackageVod {

class DeletePackagingConfigurationRequestPrivate;

class QTAWSMEDIAPACKAGEVOD_EXPORT DeletePackagingConfigurationRequest : public MediaPackageVodRequest {

public:
    DeletePackagingConfigurationRequest(const DeletePackagingConfigurationRequest &other);
    DeletePackagingConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeletePackagingConfigurationRequest)

};

} // namespace MediaPackageVod
} // namespace QtAws

#endif
