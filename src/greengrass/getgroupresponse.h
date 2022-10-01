// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGROUPRESPONSE_H
#define QTAWS_GETGROUPRESPONSE_H

#include "greengrassresponse.h"
#include "getgrouprequest.h"

namespace QtAws {
namespace Greengrass {

class GetGroupResponsePrivate;

class QTAWSGREENGRASS_EXPORT GetGroupResponse : public GreengrassResponse {
    Q_OBJECT

public:
    GetGroupResponse(const GetGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetGroupResponse)
    Q_DISABLE_COPY(GetGroupResponse)

};

} // namespace Greengrass
} // namespace QtAws

#endif
