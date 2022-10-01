// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTATTACKSRESPONSE_H
#define QTAWS_LISTATTACKSRESPONSE_H

#include "shieldresponse.h"
#include "listattacksrequest.h"

namespace QtAws {
namespace Shield {

class ListAttacksResponsePrivate;

class QTAWSSHIELD_EXPORT ListAttacksResponse : public ShieldResponse {
    Q_OBJECT

public:
    ListAttacksResponse(const ListAttacksRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAttacksRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAttacksResponse)
    Q_DISABLE_COPY(ListAttacksResponse)

};

} // namespace Shield
} // namespace QtAws

#endif
