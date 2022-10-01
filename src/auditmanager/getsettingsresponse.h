// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSETTINGSRESPONSE_H
#define QTAWS_GETSETTINGSRESPONSE_H

#include "auditmanagerresponse.h"
#include "getsettingsrequest.h"

namespace QtAws {
namespace AuditManager {

class GetSettingsResponsePrivate;

class QTAWSAUDITMANAGER_EXPORT GetSettingsResponse : public AuditManagerResponse {
    Q_OBJECT

public:
    GetSettingsResponse(const GetSettingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetSettingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSettingsResponse)
    Q_DISABLE_COPY(GetSettingsResponse)

};

} // namespace AuditManager
} // namespace QtAws

#endif
