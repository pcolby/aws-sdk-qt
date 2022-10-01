// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTASSETSREQUEST_H
#define QTAWS_LISTASSETSREQUEST_H

#include "mediapackagevodrequest.h"

namespace QtAws {
namespace MediaPackageVod {

class ListAssetsRequestPrivate;

class QTAWSMEDIAPACKAGEVOD_EXPORT ListAssetsRequest : public MediaPackageVodRequest {

public:
    ListAssetsRequest(const ListAssetsRequest &other);
    ListAssetsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAssetsRequest)

};

} // namespace MediaPackageVod
} // namespace QtAws

#endif
