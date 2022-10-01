// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPAGESBYENGAGEMENTRESPONSE_H
#define QTAWS_LISTPAGESBYENGAGEMENTRESPONSE_H

#include "ssmcontactsresponse.h"
#include "listpagesbyengagementrequest.h"

namespace QtAws {
namespace SsmContacts {

class ListPagesByEngagementResponsePrivate;

class QTAWSSSMCONTACTS_EXPORT ListPagesByEngagementResponse : public SsmContactsResponse {
    Q_OBJECT

public:
    ListPagesByEngagementResponse(const ListPagesByEngagementRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListPagesByEngagementRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPagesByEngagementResponse)
    Q_DISABLE_COPY(ListPagesByEngagementResponse)

};

} // namespace SsmContacts
} // namespace QtAws

#endif
