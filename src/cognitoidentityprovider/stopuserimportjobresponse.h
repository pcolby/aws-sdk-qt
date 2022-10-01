// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPUSERIMPORTJOBRESPONSE_H
#define QTAWS_STOPUSERIMPORTJOBRESPONSE_H

#include "cognitoidentityproviderresponse.h"
#include "stopuserimportjobrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class StopUserImportJobResponsePrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT StopUserImportJobResponse : public CognitoIdentityProviderResponse {
    Q_OBJECT

public:
    StopUserImportJobResponse(const StopUserImportJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopUserImportJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopUserImportJobResponse)
    Q_DISABLE_COPY(StopUserImportJobResponse)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
