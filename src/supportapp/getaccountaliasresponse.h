// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACCOUNTALIASRESPONSE_H
#define QTAWS_GETACCOUNTALIASRESPONSE_H

#include "supportappresponse.h"
#include "getaccountaliasrequest.h"

namespace QtAws {
namespace SupportApp {

class GetAccountAliasResponsePrivate;

class QTAWSSUPPORTAPP_EXPORT GetAccountAliasResponse : public SupportAppResponse {
    Q_OBJECT

public:
    GetAccountAliasResponse(const GetAccountAliasRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetAccountAliasRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAccountAliasResponse)
    Q_DISABLE_COPY(GetAccountAliasResponse)

};

} // namespace SupportApp
} // namespace QtAws

#endif
