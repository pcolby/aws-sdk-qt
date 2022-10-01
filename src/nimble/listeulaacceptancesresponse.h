// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEULAACCEPTANCESRESPONSE_H
#define QTAWS_LISTEULAACCEPTANCESRESPONSE_H

#include "nimbleresponse.h"
#include "listeulaacceptancesrequest.h"

namespace QtAws {
namespace Nimble {

class ListEulaAcceptancesResponsePrivate;

class QTAWSNIMBLE_EXPORT ListEulaAcceptancesResponse : public NimbleResponse {
    Q_OBJECT

public:
    ListEulaAcceptancesResponse(const ListEulaAcceptancesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListEulaAcceptancesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListEulaAcceptancesResponse)
    Q_DISABLE_COPY(ListEulaAcceptancesResponse)

};

} // namespace Nimble
} // namespace QtAws

#endif
