// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPROFILERESPONSE_H
#define QTAWS_CREATEPROFILERESPONSE_H

#include "rolesanywhereresponse.h"
#include "createprofilerequest.h"

namespace QtAws {
namespace RolesAnywhere {

class CreateProfileResponsePrivate;

class QTAWSROLESANYWHERE_EXPORT CreateProfileResponse : public RolesAnywhereResponse {
    Q_OBJECT

public:
    CreateProfileResponse(const CreateProfileRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateProfileRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateProfileResponse)
    Q_DISABLE_COPY(CreateProfileResponse)

};

} // namespace RolesAnywhere
} // namespace QtAws

#endif
