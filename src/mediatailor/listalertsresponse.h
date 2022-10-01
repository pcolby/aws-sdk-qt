// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTALERTSRESPONSE_H
#define QTAWS_LISTALERTSRESPONSE_H

#include "mediatailorresponse.h"
#include "listalertsrequest.h"

namespace QtAws {
namespace MediaTailor {

class ListAlertsResponsePrivate;

class QTAWSMEDIATAILOR_EXPORT ListAlertsResponse : public MediaTailorResponse {
    Q_OBJECT

public:
    ListAlertsResponse(const ListAlertsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAlertsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAlertsResponse)
    Q_DISABLE_COPY(ListAlertsResponse)

};

} // namespace MediaTailor
} // namespace QtAws

#endif
