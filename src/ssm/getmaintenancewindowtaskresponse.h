// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMAINTENANCEWINDOWTASKRESPONSE_H
#define QTAWS_GETMAINTENANCEWINDOWTASKRESPONSE_H

#include "ssmresponse.h"
#include "getmaintenancewindowtaskrequest.h"

namespace QtAws {
namespace Ssm {

class GetMaintenanceWindowTaskResponsePrivate;

class QTAWSSSM_EXPORT GetMaintenanceWindowTaskResponse : public SsmResponse {
    Q_OBJECT

public:
    GetMaintenanceWindowTaskResponse(const GetMaintenanceWindowTaskRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetMaintenanceWindowTaskRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMaintenanceWindowTaskResponse)
    Q_DISABLE_COPY(GetMaintenanceWindowTaskResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif
