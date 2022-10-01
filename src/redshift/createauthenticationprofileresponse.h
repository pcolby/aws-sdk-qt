// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAUTHENTICATIONPROFILERESPONSE_H
#define QTAWS_CREATEAUTHENTICATIONPROFILERESPONSE_H

#include "redshiftresponse.h"
#include "createauthenticationprofilerequest.h"

namespace QtAws {
namespace Redshift {

class CreateAuthenticationProfileResponsePrivate;

class QTAWSREDSHIFT_EXPORT CreateAuthenticationProfileResponse : public RedshiftResponse {
    Q_OBJECT

public:
    CreateAuthenticationProfileResponse(const CreateAuthenticationProfileRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateAuthenticationProfileRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAuthenticationProfileResponse)
    Q_DISABLE_COPY(CreateAuthenticationProfileResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif
