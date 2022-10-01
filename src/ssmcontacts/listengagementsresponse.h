// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTENGAGEMENTSRESPONSE_H
#define QTAWS_LISTENGAGEMENTSRESPONSE_H

#include "ssmcontactsresponse.h"
#include "listengagementsrequest.h"

namespace QtAws {
namespace SsmContacts {

class ListEngagementsResponsePrivate;

class QTAWSSSMCONTACTS_EXPORT ListEngagementsResponse : public SsmContactsResponse {
    Q_OBJECT

public:
    ListEngagementsResponse(const ListEngagementsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListEngagementsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListEngagementsResponse)
    Q_DISABLE_COPY(ListEngagementsResponse)

};

} // namespace SsmContacts
} // namespace QtAws

#endif
