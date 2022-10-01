// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYAUTHENTICATIONPROFILERESPONSE_H
#define QTAWS_MODIFYAUTHENTICATIONPROFILERESPONSE_H

#include "redshiftresponse.h"
#include "modifyauthenticationprofilerequest.h"

namespace QtAws {
namespace Redshift {

class ModifyAuthenticationProfileResponsePrivate;

class QTAWSREDSHIFT_EXPORT ModifyAuthenticationProfileResponse : public RedshiftResponse {
    Q_OBJECT

public:
    ModifyAuthenticationProfileResponse(const ModifyAuthenticationProfileRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyAuthenticationProfileRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyAuthenticationProfileResponse)
    Q_DISABLE_COPY(ModifyAuthenticationProfileResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif
