// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROTECTIONSRESPONSE_H
#define QTAWS_LISTPROTECTIONSRESPONSE_H

#include "shieldresponse.h"
#include "listprotectionsrequest.h"

namespace QtAws {
namespace Shield {

class ListProtectionsResponsePrivate;

class QTAWSSHIELD_EXPORT ListProtectionsResponse : public ShieldResponse {
    Q_OBJECT

public:
    ListProtectionsResponse(const ListProtectionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListProtectionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListProtectionsResponse)
    Q_DISABLE_COPY(ListProtectionsResponse)

};

} // namespace Shield
} // namespace QtAws

#endif
