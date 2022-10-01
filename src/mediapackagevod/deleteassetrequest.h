// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEASSETREQUEST_H
#define QTAWS_DELETEASSETREQUEST_H

#include "mediapackagevodrequest.h"

namespace QtAws {
namespace MediaPackageVod {

class DeleteAssetRequestPrivate;

class QTAWSMEDIAPACKAGEVOD_EXPORT DeleteAssetRequest : public MediaPackageVodRequest {

public:
    DeleteAssetRequest(const DeleteAssetRequest &other);
    DeleteAssetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAssetRequest)

};

} // namespace MediaPackageVod
} // namespace QtAws

#endif
