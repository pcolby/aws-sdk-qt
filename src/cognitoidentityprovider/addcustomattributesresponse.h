// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDCUSTOMATTRIBUTESRESPONSE_H
#define QTAWS_ADDCUSTOMATTRIBUTESRESPONSE_H

#include "cognitoidentityproviderresponse.h"
#include "addcustomattributesrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AddCustomAttributesResponsePrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT AddCustomAttributesResponse : public CognitoIdentityProviderResponse {
    Q_OBJECT

public:
    AddCustomAttributesResponse(const AddCustomAttributesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AddCustomAttributesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AddCustomAttributesResponse)
    Q_DISABLE_COPY(AddCustomAttributesResponse)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
