// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTALLOWLISTSRESPONSE_H
#define QTAWS_LISTALLOWLISTSRESPONSE_H

#include "macie2response.h"
#include "listallowlistsrequest.h"

namespace QtAws {
namespace Macie2 {

class ListAllowListsResponsePrivate;

class QTAWSMACIE2_EXPORT ListAllowListsResponse : public Macie2Response {
    Q_OBJECT

public:
    ListAllowListsResponse(const ListAllowListsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAllowListsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAllowListsResponse)
    Q_DISABLE_COPY(ListAllowListsResponse)

};

} // namespace Macie2
} // namespace QtAws

#endif
