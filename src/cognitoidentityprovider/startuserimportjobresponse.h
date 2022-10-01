// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTUSERIMPORTJOBRESPONSE_H
#define QTAWS_STARTUSERIMPORTJOBRESPONSE_H

#include "cognitoidentityproviderresponse.h"
#include "startuserimportjobrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class StartUserImportJobResponsePrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT StartUserImportJobResponse : public CognitoIdentityProviderResponse {
    Q_OBJECT

public:
    StartUserImportJobResponse(const StartUserImportJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartUserImportJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartUserImportJobResponse)
    Q_DISABLE_COPY(StartUserImportJobResponse)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
