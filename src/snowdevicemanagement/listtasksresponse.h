// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTASKSRESPONSE_H
#define QTAWS_LISTTASKSRESPONSE_H

#include "snowdevicemanagementresponse.h"
#include "listtasksrequest.h"

namespace QtAws {
namespace SnowDeviceManagement {

class ListTasksResponsePrivate;

class QTAWSSNOWDEVICEMANAGEMENT_EXPORT ListTasksResponse : public SnowDeviceManagementResponse {
    Q_OBJECT

public:
    ListTasksResponse(const ListTasksRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListTasksRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTasksResponse)
    Q_DISABLE_COPY(ListTasksResponse)

};

} // namespace SnowDeviceManagement
} // namespace QtAws

#endif
