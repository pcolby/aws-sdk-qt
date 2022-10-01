// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTUSECASESRESPONSE_H
#define QTAWS_LISTUSECASESRESPONSE_H

#include "connectresponse.h"
#include "listusecasesrequest.h"

namespace QtAws {
namespace Connect {

class ListUseCasesResponsePrivate;

class QTAWSCONNECT_EXPORT ListUseCasesResponse : public ConnectResponse {
    Q_OBJECT

public:
    ListUseCasesResponse(const ListUseCasesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListUseCasesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListUseCasesResponse)
    Q_DISABLE_COPY(ListUseCasesResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
