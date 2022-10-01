// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONTROLRESPONSE_H
#define QTAWS_GETCONTROLRESPONSE_H

#include "auditmanagerresponse.h"
#include "getcontrolrequest.h"

namespace QtAws {
namespace AuditManager {

class GetControlResponsePrivate;

class QTAWSAUDITMANAGER_EXPORT GetControlResponse : public AuditManagerResponse {
    Q_OBJECT

public:
    GetControlResponse(const GetControlRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetControlRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetControlResponse)
    Q_DISABLE_COPY(GetControlResponse)

};

} // namespace AuditManager
} // namespace QtAws

#endif
