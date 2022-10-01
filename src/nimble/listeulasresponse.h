// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEULASRESPONSE_H
#define QTAWS_LISTEULASRESPONSE_H

#include "nimbleresponse.h"
#include "listeulasrequest.h"

namespace QtAws {
namespace Nimble {

class ListEulasResponsePrivate;

class QTAWSNIMBLE_EXPORT ListEulasResponse : public NimbleResponse {
    Q_OBJECT

public:
    ListEulasResponse(const ListEulasRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListEulasRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListEulasResponse)
    Q_DISABLE_COPY(ListEulasResponse)

};

} // namespace Nimble
} // namespace QtAws

#endif
