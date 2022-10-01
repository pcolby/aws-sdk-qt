// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMAINTENANCEWINDOWRESPONSE_H
#define QTAWS_GETMAINTENANCEWINDOWRESPONSE_H

#include "ssmresponse.h"
#include "getmaintenancewindowrequest.h"

namespace QtAws {
namespace Ssm {

class GetMaintenanceWindowResponsePrivate;

class QTAWSSSM_EXPORT GetMaintenanceWindowResponse : public SsmResponse {
    Q_OBJECT

public:
    GetMaintenanceWindowResponse(const GetMaintenanceWindowRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetMaintenanceWindowRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMaintenanceWindowResponse)
    Q_DISABLE_COPY(GetMaintenanceWindowResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif
