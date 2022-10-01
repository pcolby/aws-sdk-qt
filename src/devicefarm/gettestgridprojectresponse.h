// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTESTGRIDPROJECTRESPONSE_H
#define QTAWS_GETTESTGRIDPROJECTRESPONSE_H

#include "devicefarmresponse.h"
#include "gettestgridprojectrequest.h"

namespace QtAws {
namespace DeviceFarm {

class GetTestGridProjectResponsePrivate;

class QTAWSDEVICEFARM_EXPORT GetTestGridProjectResponse : public DeviceFarmResponse {
    Q_OBJECT

public:
    GetTestGridProjectResponse(const GetTestGridProjectRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetTestGridProjectRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTestGridProjectResponse)
    Q_DISABLE_COPY(GetTestGridProjectResponse)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
