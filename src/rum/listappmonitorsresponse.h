// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPMONITORSRESPONSE_H
#define QTAWS_LISTAPPMONITORSRESPONSE_H

#include "rumresponse.h"
#include "listappmonitorsrequest.h"

namespace QtAws {
namespace Rum {

class ListAppMonitorsResponsePrivate;

class QTAWSRUM_EXPORT ListAppMonitorsResponse : public RumResponse {
    Q_OBJECT

public:
    ListAppMonitorsResponse(const ListAppMonitorsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAppMonitorsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAppMonitorsResponse)
    Q_DISABLE_COPY(ListAppMonitorsResponse)

};

} // namespace Rum
} // namespace QtAws

#endif
