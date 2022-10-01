// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETESTGRIDPROJECTRESPONSE_H
#define QTAWS_CREATETESTGRIDPROJECTRESPONSE_H

#include "devicefarmresponse.h"
#include "createtestgridprojectrequest.h"

namespace QtAws {
namespace DeviceFarm {

class CreateTestGridProjectResponsePrivate;

class QTAWSDEVICEFARM_EXPORT CreateTestGridProjectResponse : public DeviceFarmResponse {
    Q_OBJECT

public:
    CreateTestGridProjectResponse(const CreateTestGridProjectRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateTestGridProjectRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateTestGridProjectResponse)
    Q_DISABLE_COPY(CreateTestGridProjectResponse)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
