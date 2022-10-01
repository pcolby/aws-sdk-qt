// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MERGEDEVELOPERIDENTITIESRESPONSE_H
#define QTAWS_MERGEDEVELOPERIDENTITIESRESPONSE_H

#include "cognitoidentityresponse.h"
#include "mergedeveloperidentitiesrequest.h"

namespace QtAws {
namespace CognitoIdentity {

class MergeDeveloperIdentitiesResponsePrivate;

class QTAWSCOGNITOIDENTITY_EXPORT MergeDeveloperIdentitiesResponse : public CognitoIdentityResponse {
    Q_OBJECT

public:
    MergeDeveloperIdentitiesResponse(const MergeDeveloperIdentitiesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const MergeDeveloperIdentitiesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(MergeDeveloperIdentitiesResponse)
    Q_DISABLE_COPY(MergeDeveloperIdentitiesResponse)

};

} // namespace CognitoIdentity
} // namespace QtAws

#endif
