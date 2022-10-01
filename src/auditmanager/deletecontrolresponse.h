// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONTROLRESPONSE_H
#define QTAWS_DELETECONTROLRESPONSE_H

#include "auditmanagerresponse.h"
#include "deletecontrolrequest.h"

namespace QtAws {
namespace AuditManager {

class DeleteControlResponsePrivate;

class QTAWSAUDITMANAGER_EXPORT DeleteControlResponse : public AuditManagerResponse {
    Q_OBJECT

public:
    DeleteControlResponse(const DeleteControlRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteControlRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteControlResponse)
    Q_DISABLE_COPY(DeleteControlResponse)

};

} // namespace AuditManager
} // namespace QtAws

#endif
