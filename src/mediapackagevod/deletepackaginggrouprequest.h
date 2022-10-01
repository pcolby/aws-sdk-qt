// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPACKAGINGGROUPREQUEST_H
#define QTAWS_DELETEPACKAGINGGROUPREQUEST_H

#include "mediapackagevodrequest.h"

namespace QtAws {
namespace MediaPackageVod {

class DeletePackagingGroupRequestPrivate;

class QTAWSMEDIAPACKAGEVOD_EXPORT DeletePackagingGroupRequest : public MediaPackageVodRequest {

public:
    DeletePackagingGroupRequest(const DeletePackagingGroupRequest &other);
    DeletePackagingGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeletePackagingGroupRequest)

};

} // namespace MediaPackageVod
} // namespace QtAws

#endif
