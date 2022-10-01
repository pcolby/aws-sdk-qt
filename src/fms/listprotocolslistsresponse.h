// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROTOCOLSLISTSRESPONSE_H
#define QTAWS_LISTPROTOCOLSLISTSRESPONSE_H

#include "fmsresponse.h"
#include "listprotocolslistsrequest.h"

namespace QtAws {
namespace Fms {

class ListProtocolsListsResponsePrivate;

class QTAWSFMS_EXPORT ListProtocolsListsResponse : public FmsResponse {
    Q_OBJECT

public:
    ListProtocolsListsResponse(const ListProtocolsListsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListProtocolsListsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListProtocolsListsResponse)
    Q_DISABLE_COPY(ListProtocolsListsResponse)

};

} // namespace Fms
} // namespace QtAws

#endif
