// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELTASKRESPONSE_H
#define QTAWS_CANCELTASKRESPONSE_H

#include "snowdevicemanagementresponse.h"
#include "canceltaskrequest.h"

namespace QtAws {
namespace SnowDeviceManagement {

class CancelTaskResponsePrivate;

class QTAWSSNOWDEVICEMANAGEMENT_EXPORT CancelTaskResponse : public SnowDeviceManagementResponse {
    Q_OBJECT

public:
    CancelTaskResponse(const CancelTaskRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CancelTaskRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelTaskResponse)
    Q_DISABLE_COPY(CancelTaskResponse)

};

} // namespace SnowDeviceManagement
} // namespace QtAws

#endif
