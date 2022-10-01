// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACTIONSRESPONSE_H
#define QTAWS_LISTACTIONSRESPONSE_H

#include "fisresponse.h"
#include "listactionsrequest.h"

namespace QtAws {
namespace Fis {

class ListActionsResponsePrivate;

class QTAWSFIS_EXPORT ListActionsResponse : public FisResponse {
    Q_OBJECT

public:
    ListActionsResponse(const ListActionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListActionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListActionsResponse)
    Q_DISABLE_COPY(ListActionsResponse)

};

} // namespace Fis
} // namespace QtAws

#endif
