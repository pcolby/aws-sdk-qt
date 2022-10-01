// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMAINTENANCEWINDOWRESPONSE_H
#define QTAWS_DELETEMAINTENANCEWINDOWRESPONSE_H

#include "ssmresponse.h"
#include "deletemaintenancewindowrequest.h"

namespace QtAws {
namespace Ssm {

class DeleteMaintenanceWindowResponsePrivate;

class QTAWSSSM_EXPORT DeleteMaintenanceWindowResponse : public SsmResponse {
    Q_OBJECT

public:
    DeleteMaintenanceWindowResponse(const DeleteMaintenanceWindowRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteMaintenanceWindowRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteMaintenanceWindowResponse)
    Q_DISABLE_COPY(DeleteMaintenanceWindowResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif
