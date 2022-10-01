// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPACKAGINGGROUPRESPONSE_H
#define QTAWS_CREATEPACKAGINGGROUPRESPONSE_H

#include "mediapackagevodresponse.h"
#include "createpackaginggrouprequest.h"

namespace QtAws {
namespace MediaPackageVod {

class CreatePackagingGroupResponsePrivate;

class QTAWSMEDIAPACKAGEVOD_EXPORT CreatePackagingGroupResponse : public MediaPackageVodResponse {
    Q_OBJECT

public:
    CreatePackagingGroupResponse(const CreatePackagingGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreatePackagingGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreatePackagingGroupResponse)
    Q_DISABLE_COPY(CreatePackagingGroupResponse)

};

} // namespace MediaPackageVod
} // namespace QtAws

#endif
