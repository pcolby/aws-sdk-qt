// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTENTITIESRESPONSE_H
#define QTAWS_LISTENTITIESRESPONSE_H

#include "iottwinmakerresponse.h"
#include "listentitiesrequest.h"

namespace QtAws {
namespace IoTTwinMaker {

class ListEntitiesResponsePrivate;

class QTAWSIOTTWINMAKER_EXPORT ListEntitiesResponse : public IoTTwinMakerResponse {
    Q_OBJECT

public:
    ListEntitiesResponse(const ListEntitiesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListEntitiesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListEntitiesResponse)
    Q_DISABLE_COPY(ListEntitiesResponse)

};

} // namespace IoTTwinMaker
} // namespace QtAws

#endif
