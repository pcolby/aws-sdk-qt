// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPACKAGINGGROUPSRESPONSE_H
#define QTAWS_LISTPACKAGINGGROUPSRESPONSE_H

#include "mediapackagevodresponse.h"
#include "listpackaginggroupsrequest.h"

namespace QtAws {
namespace MediaPackageVod {

class ListPackagingGroupsResponsePrivate;

class QTAWSMEDIAPACKAGEVOD_EXPORT ListPackagingGroupsResponse : public MediaPackageVodResponse {
    Q_OBJECT

public:
    ListPackagingGroupsResponse(const ListPackagingGroupsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListPackagingGroupsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPackagingGroupsResponse)
    Q_DISABLE_COPY(ListPackagingGroupsResponse)

};

} // namespace MediaPackageVod
} // namespace QtAws

#endif
