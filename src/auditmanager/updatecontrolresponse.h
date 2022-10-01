// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONTROLRESPONSE_H
#define QTAWS_UPDATECONTROLRESPONSE_H

#include "auditmanagerresponse.h"
#include "updatecontrolrequest.h"

namespace QtAws {
namespace AuditManager {

class UpdateControlResponsePrivate;

class QTAWSAUDITMANAGER_EXPORT UpdateControlResponse : public AuditManagerResponse {
    Q_OBJECT

public:
    UpdateControlResponse(const UpdateControlRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateControlRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateControlResponse)
    Q_DISABLE_COPY(UpdateControlResponse)

};

} // namespace AuditManager
} // namespace QtAws

#endif
