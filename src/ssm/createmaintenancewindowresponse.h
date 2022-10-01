// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMAINTENANCEWINDOWRESPONSE_H
#define QTAWS_CREATEMAINTENANCEWINDOWRESPONSE_H

#include "ssmresponse.h"
#include "createmaintenancewindowrequest.h"

namespace QtAws {
namespace Ssm {

class CreateMaintenanceWindowResponsePrivate;

class QTAWSSSM_EXPORT CreateMaintenanceWindowResponse : public SsmResponse {
    Q_OBJECT

public:
    CreateMaintenanceWindowResponse(const CreateMaintenanceWindowRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateMaintenanceWindowRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateMaintenanceWindowResponse)
    Q_DISABLE_COPY(CreateMaintenanceWindowResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif
