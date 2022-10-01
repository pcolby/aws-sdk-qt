// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETASKRESPONSE_H
#define QTAWS_CREATETASKRESPONSE_H

#include "snowdevicemanagementresponse.h"
#include "createtaskrequest.h"

namespace QtAws {
namespace SnowDeviceManagement {

class CreateTaskResponsePrivate;

class QTAWSSNOWDEVICEMANAGEMENT_EXPORT CreateTaskResponse : public SnowDeviceManagementResponse {
    Q_OBJECT

public:
    CreateTaskResponse(const CreateTaskRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateTaskRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateTaskResponse)
    Q_DISABLE_COPY(CreateTaskResponse)

};

} // namespace SnowDeviceManagement
} // namespace QtAws

#endif
