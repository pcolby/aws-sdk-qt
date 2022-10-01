// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTACCOUNTALIASRESPONSE_H
#define QTAWS_PUTACCOUNTALIASRESPONSE_H

#include "supportappresponse.h"
#include "putaccountaliasrequest.h"

namespace QtAws {
namespace SupportApp {

class PutAccountAliasResponsePrivate;

class QTAWSSUPPORTAPP_EXPORT PutAccountAliasResponse : public SupportAppResponse {
    Q_OBJECT

public:
    PutAccountAliasResponse(const PutAccountAliasRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutAccountAliasRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutAccountAliasResponse)
    Q_DISABLE_COPY(PutAccountAliasResponse)

};

} // namespace SupportApp
} // namespace QtAws

#endif
