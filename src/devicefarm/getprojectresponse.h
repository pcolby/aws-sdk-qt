// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPROJECTRESPONSE_H
#define QTAWS_GETPROJECTRESPONSE_H

#include "devicefarmresponse.h"
#include "getprojectrequest.h"

namespace QtAws {
namespace DeviceFarm {

class GetProjectResponsePrivate;

class QTAWSDEVICEFARM_EXPORT GetProjectResponse : public DeviceFarmResponse {
    Q_OBJECT

public:
    GetProjectResponse(const GetProjectRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetProjectRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetProjectResponse)
    Q_DISABLE_COPY(GetProjectResponse)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
