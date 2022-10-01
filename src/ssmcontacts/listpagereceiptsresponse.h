// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPAGERECEIPTSRESPONSE_H
#define QTAWS_LISTPAGERECEIPTSRESPONSE_H

#include "ssmcontactsresponse.h"
#include "listpagereceiptsrequest.h"

namespace QtAws {
namespace SsmContacts {

class ListPageReceiptsResponsePrivate;

class QTAWSSSMCONTACTS_EXPORT ListPageReceiptsResponse : public SsmContactsResponse {
    Q_OBJECT

public:
    ListPageReceiptsResponse(const ListPageReceiptsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListPageReceiptsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPageReceiptsResponse)
    Q_DISABLE_COPY(ListPageReceiptsResponse)

};

} // namespace SsmContacts
} // namespace QtAws

#endif
