// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEEMERGENCYCONTACTSETTINGSRESPONSE_H
#define QTAWS_UPDATEEMERGENCYCONTACTSETTINGSRESPONSE_H

#include "shieldresponse.h"
#include "updateemergencycontactsettingsrequest.h"

namespace QtAws {
namespace Shield {

class UpdateEmergencyContactSettingsResponsePrivate;

class QTAWSSHIELD_EXPORT UpdateEmergencyContactSettingsResponse : public ShieldResponse {
    Q_OBJECT

public:
    UpdateEmergencyContactSettingsResponse(const UpdateEmergencyContactSettingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateEmergencyContactSettingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateEmergencyContactSettingsResponse)
    Q_DISABLE_COPY(UpdateEmergencyContactSettingsResponse)

};

} // namespace Shield
} // namespace QtAws

#endif
