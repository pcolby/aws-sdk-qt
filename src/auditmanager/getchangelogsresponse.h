// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCHANGELOGSRESPONSE_H
#define QTAWS_GETCHANGELOGSRESPONSE_H

#include "auditmanagerresponse.h"
#include "getchangelogsrequest.h"

namespace QtAws {
namespace AuditManager {

class GetChangeLogsResponsePrivate;

class QTAWSAUDITMANAGER_EXPORT GetChangeLogsResponse : public AuditManagerResponse {
    Q_OBJECT

public:
    GetChangeLogsResponse(const GetChangeLogsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetChangeLogsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetChangeLogsResponse)
    Q_DISABLE_COPY(GetChangeLogsResponse)

};

} // namespace AuditManager
} // namespace QtAws

#endif
