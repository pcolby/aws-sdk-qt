// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPAGESBYCONTACTRESPONSE_H
#define QTAWS_LISTPAGESBYCONTACTRESPONSE_H

#include "ssmcontactsresponse.h"
#include "listpagesbycontactrequest.h"

namespace QtAws {
namespace SsmContacts {

class ListPagesByContactResponsePrivate;

class QTAWSSSMCONTACTS_EXPORT ListPagesByContactResponse : public SsmContactsResponse {
    Q_OBJECT

public:
    ListPagesByContactResponse(const ListPagesByContactRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListPagesByContactRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPagesByContactResponse)
    Q_DISABLE_COPY(ListPagesByContactResponse)

};

} // namespace SsmContacts
} // namespace QtAws

#endif
