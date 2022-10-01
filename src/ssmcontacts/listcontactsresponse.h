// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONTACTSRESPONSE_H
#define QTAWS_LISTCONTACTSRESPONSE_H

#include "ssmcontactsresponse.h"
#include "listcontactsrequest.h"

namespace QtAws {
namespace SsmContacts {

class ListContactsResponsePrivate;

class QTAWSSSMCONTACTS_EXPORT ListContactsResponse : public SsmContactsResponse {
    Q_OBJECT

public:
    ListContactsResponse(const ListContactsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListContactsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListContactsResponse)
    Q_DISABLE_COPY(ListContactsResponse)

};

} // namespace SsmContacts
} // namespace QtAws

#endif
