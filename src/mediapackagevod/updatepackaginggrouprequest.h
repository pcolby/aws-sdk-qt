// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPACKAGINGGROUPREQUEST_H
#define QTAWS_UPDATEPACKAGINGGROUPREQUEST_H

#include "mediapackagevodrequest.h"

namespace QtAws {
namespace MediaPackageVod {

class UpdatePackagingGroupRequestPrivate;

class QTAWSMEDIAPACKAGEVOD_EXPORT UpdatePackagingGroupRequest : public MediaPackageVodRequest {

public:
    UpdatePackagingGroupRequest(const UpdatePackagingGroupRequest &other);
    UpdatePackagingGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdatePackagingGroupRequest)

};

} // namespace MediaPackageVod
} // namespace QtAws

#endif
