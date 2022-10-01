// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTALIASESRESPONSE_H
#define QTAWS_LISTALIASESRESPONSE_H

#include "kmsresponse.h"
#include "listaliasesrequest.h"

namespace QtAws {
namespace Kms {

class ListAliasesResponsePrivate;

class QTAWSKMS_EXPORT ListAliasesResponse : public KmsResponse {
    Q_OBJECT

public:
    ListAliasesResponse(const ListAliasesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAliasesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAliasesResponse)
    Q_DISABLE_COPY(ListAliasesResponse)

};

} // namespace Kms
} // namespace QtAws

#endif
