// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONTROLRESPONSE_H
#define QTAWS_CREATECONTROLRESPONSE_H

#include "auditmanagerresponse.h"
#include "createcontrolrequest.h"

namespace QtAws {
namespace AuditManager {

class CreateControlResponsePrivate;

class QTAWSAUDITMANAGER_EXPORT CreateControlResponse : public AuditManagerResponse {
    Q_OBJECT

public:
    CreateControlResponse(const CreateControlRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateControlRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateControlResponse)
    Q_DISABLE_COPY(CreateControlResponse)

};

} // namespace AuditManager
} // namespace QtAws

#endif
