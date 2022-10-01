// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGROUPSOLDERTHANORDERINGIDRESPONSE_H
#define QTAWS_LISTGROUPSOLDERTHANORDERINGIDRESPONSE_H

#include "kendraresponse.h"
#include "listgroupsolderthanorderingidrequest.h"

namespace QtAws {
namespace Kendra {

class ListGroupsOlderThanOrderingIdResponsePrivate;

class QTAWSKENDRA_EXPORT ListGroupsOlderThanOrderingIdResponse : public KendraResponse {
    Q_OBJECT

public:
    ListGroupsOlderThanOrderingIdResponse(const ListGroupsOlderThanOrderingIdRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListGroupsOlderThanOrderingIdRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListGroupsOlderThanOrderingIdResponse)
    Q_DISABLE_COPY(ListGroupsOlderThanOrderingIdResponse)

};

} // namespace Kendra
} // namespace QtAws

#endif
