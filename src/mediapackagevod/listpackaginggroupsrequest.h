// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPACKAGINGGROUPSREQUEST_H
#define QTAWS_LISTPACKAGINGGROUPSREQUEST_H

#include "mediapackagevodrequest.h"

namespace QtAws {
namespace MediaPackageVod {

class ListPackagingGroupsRequestPrivate;

class QTAWSMEDIAPACKAGEVOD_EXPORT ListPackagingGroupsRequest : public MediaPackageVodRequest {

public:
    ListPackagingGroupsRequest(const ListPackagingGroupsRequest &other);
    ListPackagingGroupsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPackagingGroupsRequest)

};

} // namespace MediaPackageVod
} // namespace QtAws

#endif
