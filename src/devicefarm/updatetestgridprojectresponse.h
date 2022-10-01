// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETESTGRIDPROJECTRESPONSE_H
#define QTAWS_UPDATETESTGRIDPROJECTRESPONSE_H

#include "devicefarmresponse.h"
#include "updatetestgridprojectrequest.h"

namespace QtAws {
namespace DeviceFarm {

class UpdateTestGridProjectResponsePrivate;

class QTAWSDEVICEFARM_EXPORT UpdateTestGridProjectResponse : public DeviceFarmResponse {
    Q_OBJECT

public:
    UpdateTestGridProjectResponse(const UpdateTestGridProjectRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateTestGridProjectRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateTestGridProjectResponse)
    Q_DISABLE_COPY(UpdateTestGridProjectResponse)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
