// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMEMBERSRESPONSE_H
#define QTAWS_LISTMEMBERSRESPONSE_H

#include "inspector2response.h"
#include "listmembersrequest.h"

namespace QtAws {
namespace Inspector2 {

class ListMembersResponsePrivate;

class QTAWSINSPECTOR2_EXPORT ListMembersResponse : public Inspector2Response {
    Q_OBJECT

public:
    ListMembersResponse(const ListMembersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListMembersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListMembersResponse)
    Q_DISABLE_COPY(ListMembersResponse)

};

} // namespace Inspector2
} // namespace QtAws

#endif
