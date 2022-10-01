// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEPROFILERESPONSE_H
#define QTAWS_DISABLEPROFILERESPONSE_H

#include "rolesanywhereresponse.h"
#include "disableprofilerequest.h"

namespace QtAws {
namespace RolesAnywhere {

class DisableProfileResponsePrivate;

class QTAWSROLESANYWHERE_EXPORT DisableProfileResponse : public RolesAnywhereResponse {
    Q_OBJECT

public:
    DisableProfileResponse(const DisableProfileRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisableProfileRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisableProfileResponse)
    Q_DISABLE_COPY(DisableProfileResponse)

};

} // namespace RolesAnywhere
} // namespace QtAws

#endif
