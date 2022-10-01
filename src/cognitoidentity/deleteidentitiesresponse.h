// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEIDENTITIESRESPONSE_H
#define QTAWS_DELETEIDENTITIESRESPONSE_H

#include "cognitoidentityresponse.h"
#include "deleteidentitiesrequest.h"

namespace QtAws {
namespace CognitoIdentity {

class DeleteIdentitiesResponsePrivate;

class QTAWSCOGNITOIDENTITY_EXPORT DeleteIdentitiesResponse : public CognitoIdentityResponse {
    Q_OBJECT

public:
    DeleteIdentitiesResponse(const DeleteIdentitiesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteIdentitiesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteIdentitiesResponse)
    Q_DISABLE_COPY(DeleteIdentitiesResponse)

};

} // namespace CognitoIdentity
} // namespace QtAws

#endif
