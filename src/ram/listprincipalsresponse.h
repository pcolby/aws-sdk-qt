// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPRINCIPALSRESPONSE_H
#define QTAWS_LISTPRINCIPALSRESPONSE_H

#include "ramresponse.h"
#include "listprincipalsrequest.h"

namespace QtAws {
namespace Ram {

class ListPrincipalsResponsePrivate;

class QTAWSRAM_EXPORT ListPrincipalsResponse : public RamResponse {
    Q_OBJECT

public:
    ListPrincipalsResponse(const ListPrincipalsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListPrincipalsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPrincipalsResponse)
    Q_DISABLE_COPY(ListPrincipalsResponse)

};

} // namespace Ram
} // namespace QtAws

#endif
