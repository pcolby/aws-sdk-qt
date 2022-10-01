// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPROFILERESPONSE_H
#define QTAWS_UPDATEPROFILERESPONSE_H

#include "rolesanywhereresponse.h"
#include "updateprofilerequest.h"

namespace QtAws {
namespace RolesAnywhere {

class UpdateProfileResponsePrivate;

class QTAWSROLESANYWHERE_EXPORT UpdateProfileResponse : public RolesAnywhereResponse {
    Q_OBJECT

public:
    UpdateProfileResponse(const UpdateProfileRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateProfileRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateProfileResponse)
    Q_DISABLE_COPY(UpdateProfileResponse)

};

} // namespace RolesAnywhere
} // namespace QtAws

#endif
