// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPACKAGINGGROUPRESPONSE_H
#define QTAWS_DELETEPACKAGINGGROUPRESPONSE_H

#include "mediapackagevodresponse.h"
#include "deletepackaginggrouprequest.h"

namespace QtAws {
namespace MediaPackageVod {

class DeletePackagingGroupResponsePrivate;

class QTAWSMEDIAPACKAGEVOD_EXPORT DeletePackagingGroupResponse : public MediaPackageVodResponse {
    Q_OBJECT

public:
    DeletePackagingGroupResponse(const DeletePackagingGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeletePackagingGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeletePackagingGroupResponse)
    Q_DISABLE_COPY(DeletePackagingGroupResponse)

};

} // namespace MediaPackageVod
} // namespace QtAws

#endif
