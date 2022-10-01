// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEPROFILERESPONSE_H
#define QTAWS_ENABLEPROFILERESPONSE_H

#include "rolesanywhereresponse.h"
#include "enableprofilerequest.h"

namespace QtAws {
namespace RolesAnywhere {

class EnableProfileResponsePrivate;

class QTAWSROLESANYWHERE_EXPORT EnableProfileResponse : public RolesAnywhereResponse {
    Q_OBJECT

public:
    EnableProfileResponse(const EnableProfileRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const EnableProfileRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EnableProfileResponse)
    Q_DISABLE_COPY(EnableProfileResponse)

};

} // namespace RolesAnywhere
} // namespace QtAws

#endif
