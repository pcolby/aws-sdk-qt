// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTRANSACTIONSRESPONSE_H
#define QTAWS_LISTTRANSACTIONSRESPONSE_H

#include "lakeformationresponse.h"
#include "listtransactionsrequest.h"

namespace QtAws {
namespace LakeFormation {

class ListTransactionsResponsePrivate;

class QTAWSLAKEFORMATION_EXPORT ListTransactionsResponse : public LakeFormationResponse {
    Q_OBJECT

public:
    ListTransactionsResponse(const ListTransactionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListTransactionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTransactionsResponse)
    Q_DISABLE_COPY(ListTransactionsResponse)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
