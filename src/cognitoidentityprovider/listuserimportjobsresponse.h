// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTUSERIMPORTJOBSRESPONSE_H
#define QTAWS_LISTUSERIMPORTJOBSRESPONSE_H

#include "cognitoidentityproviderresponse.h"
#include "listuserimportjobsrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class ListUserImportJobsResponsePrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT ListUserImportJobsResponse : public CognitoIdentityProviderResponse {
    Q_OBJECT

public:
    ListUserImportJobsResponse(const ListUserImportJobsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListUserImportJobsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListUserImportJobsResponse)
    Q_DISABLE_COPY(ListUserImportJobsResponse)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
