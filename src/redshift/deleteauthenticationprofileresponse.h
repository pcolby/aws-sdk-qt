// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAUTHENTICATIONPROFILERESPONSE_H
#define QTAWS_DELETEAUTHENTICATIONPROFILERESPONSE_H

#include "redshiftresponse.h"
#include "deleteauthenticationprofilerequest.h"

namespace QtAws {
namespace Redshift {

class DeleteAuthenticationProfileResponsePrivate;

class QTAWSREDSHIFT_EXPORT DeleteAuthenticationProfileResponse : public RedshiftResponse {
    Q_OBJECT

public:
    DeleteAuthenticationProfileResponse(const DeleteAuthenticationProfileRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteAuthenticationProfileRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAuthenticationProfileResponse)
    Q_DISABLE_COPY(DeleteAuthenticationProfileResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif
