// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACCOUNTALIASREQUEST_H
#define QTAWS_GETACCOUNTALIASREQUEST_H

#include "supportapprequest.h"

namespace QtAws {
namespace SupportApp {

class GetAccountAliasRequestPrivate;

class QTAWSSUPPORTAPP_EXPORT GetAccountAliasRequest : public SupportAppRequest {

public:
    GetAccountAliasRequest(const GetAccountAliasRequest &other);
    GetAccountAliasRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAccountAliasRequest)

};

} // namespace SupportApp
} // namespace QtAws

#endif
