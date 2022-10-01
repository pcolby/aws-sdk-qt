// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTUPDATESRESPONSE_H
#define QTAWS_LISTUPDATESRESPONSE_H

#include "eksresponse.h"
#include "listupdatesrequest.h"

namespace QtAws {
namespace Eks {

class ListUpdatesResponsePrivate;

class QTAWSEKS_EXPORT ListUpdatesResponse : public EksResponse {
    Q_OBJECT

public:
    ListUpdatesResponse(const ListUpdatesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListUpdatesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListUpdatesResponse)
    Q_DISABLE_COPY(ListUpdatesResponse)

};

} // namespace Eks
} // namespace QtAws

#endif
