// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEACCOUNTALIASRESPONSE_H
#define QTAWS_CREATEACCOUNTALIASRESPONSE_H

#include "iamresponse.h"
#include "createaccountaliasrequest.h"

namespace QtAws {
namespace Iam {

class CreateAccountAliasResponsePrivate;

class QTAWSIAM_EXPORT CreateAccountAliasResponse : public IamResponse {
    Q_OBJECT

public:
    CreateAccountAliasResponse(const CreateAccountAliasRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateAccountAliasRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAccountAliasResponse)
    Q_DISABLE_COPY(CreateAccountAliasResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
