// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPACKAGINGGROUPREQUEST_H
#define QTAWS_CREATEPACKAGINGGROUPREQUEST_H

#include "mediapackagevodrequest.h"

namespace QtAws {
namespace MediaPackageVod {

class CreatePackagingGroupRequestPrivate;

class QTAWSMEDIAPACKAGEVOD_EXPORT CreatePackagingGroupRequest : public MediaPackageVodRequest {

public:
    CreatePackagingGroupRequest(const CreatePackagingGroupRequest &other);
    CreatePackagingGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreatePackagingGroupRequest)

};

} // namespace MediaPackageVod
} // namespace QtAws

#endif
