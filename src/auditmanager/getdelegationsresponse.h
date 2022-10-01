// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDELEGATIONSRESPONSE_H
#define QTAWS_GETDELEGATIONSRESPONSE_H

#include "auditmanagerresponse.h"
#include "getdelegationsrequest.h"

namespace QtAws {
namespace AuditManager {

class GetDelegationsResponsePrivate;

class QTAWSAUDITMANAGER_EXPORT GetDelegationsResponse : public AuditManagerResponse {
    Q_OBJECT

public:
    GetDelegationsResponse(const GetDelegationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetDelegationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDelegationsResponse)
    Q_DISABLE_COPY(GetDelegationsResponse)

};

} // namespace AuditManager
} // namespace QtAws

#endif
