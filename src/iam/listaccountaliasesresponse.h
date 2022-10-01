// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACCOUNTALIASESRESPONSE_H
#define QTAWS_LISTACCOUNTALIASESRESPONSE_H

#include "iamresponse.h"
#include "listaccountaliasesrequest.h"

namespace QtAws {
namespace Iam {

class ListAccountAliasesResponsePrivate;

class QTAWSIAM_EXPORT ListAccountAliasesResponse : public IamResponse {
    Q_OBJECT

public:
    ListAccountAliasesResponse(const ListAccountAliasesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAccountAliasesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAccountAliasesResponse)
    Q_DISABLE_COPY(ListAccountAliasesResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
