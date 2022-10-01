// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTJOURNEYSRESPONSE_H
#define QTAWS_LISTJOURNEYSRESPONSE_H

#include "pinpointresponse.h"
#include "listjourneysrequest.h"

namespace QtAws {
namespace Pinpoint {

class ListJourneysResponsePrivate;

class QTAWSPINPOINT_EXPORT ListJourneysResponse : public PinpointResponse {
    Q_OBJECT

public:
    ListJourneysResponse(const ListJourneysRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListJourneysRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListJourneysResponse)
    Q_DISABLE_COPY(ListJourneysResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
