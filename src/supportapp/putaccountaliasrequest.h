// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTACCOUNTALIASREQUEST_H
#define QTAWS_PUTACCOUNTALIASREQUEST_H

#include "supportapprequest.h"

namespace QtAws {
namespace SupportApp {

class PutAccountAliasRequestPrivate;

class QTAWSSUPPORTAPP_EXPORT PutAccountAliasRequest : public SupportAppRequest {

public:
    PutAccountAliasRequest(const PutAccountAliasRequest &other);
    PutAccountAliasRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutAccountAliasRequest)

};

} // namespace SupportApp
} // namespace QtAws

#endif
