// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETESTGRIDPROJECTRESPONSE_H
#define QTAWS_DELETETESTGRIDPROJECTRESPONSE_H

#include "devicefarmresponse.h"
#include "deletetestgridprojectrequest.h"

namespace QtAws {
namespace DeviceFarm {

class DeleteTestGridProjectResponsePrivate;

class QTAWSDEVICEFARM_EXPORT DeleteTestGridProjectResponse : public DeviceFarmResponse {
    Q_OBJECT

public:
    DeleteTestGridProjectResponse(const DeleteTestGridProjectRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteTestGridProjectRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteTestGridProjectResponse)
    Q_DISABLE_COPY(DeleteTestGridProjectResponse)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
