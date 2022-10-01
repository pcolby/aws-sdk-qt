// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEACCOUNTALIASRESPONSE_H
#define QTAWS_DELETEACCOUNTALIASRESPONSE_H

#include "iamresponse.h"
#include "deleteaccountaliasrequest.h"

namespace QtAws {
namespace Iam {

class DeleteAccountAliasResponsePrivate;

class QTAWSIAM_EXPORT DeleteAccountAliasResponse : public IamResponse {
    Q_OBJECT

public:
    DeleteAccountAliasResponse(const DeleteAccountAliasRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteAccountAliasRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAccountAliasResponse)
    Q_DISABLE_COPY(DeleteAccountAliasResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
