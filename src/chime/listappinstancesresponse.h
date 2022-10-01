// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPINSTANCESRESPONSE_H
#define QTAWS_LISTAPPINSTANCESRESPONSE_H

#include "chimeresponse.h"
#include "listappinstancesrequest.h"

namespace QtAws {
namespace Chime {

class ListAppInstancesResponsePrivate;

class QTAWSCHIME_EXPORT ListAppInstancesResponse : public ChimeResponse {
    Q_OBJECT

public:
    ListAppInstancesResponse(const ListAppInstancesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAppInstancesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAppInstancesResponse)
    Q_DISABLE_COPY(ListAppInstancesResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
