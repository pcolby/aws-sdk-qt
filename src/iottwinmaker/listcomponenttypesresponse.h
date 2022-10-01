// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCOMPONENTTYPESRESPONSE_H
#define QTAWS_LISTCOMPONENTTYPESRESPONSE_H

#include "iottwinmakerresponse.h"
#include "listcomponenttypesrequest.h"

namespace QtAws {
namespace IoTTwinMaker {

class ListComponentTypesResponsePrivate;

class QTAWSIOTTWINMAKER_EXPORT ListComponentTypesResponse : public IoTTwinMakerResponse {
    Q_OBJECT

public:
    ListComponentTypesResponse(const ListComponentTypesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListComponentTypesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListComponentTypesResponse)
    Q_DISABLE_COPY(ListComponentTypesResponse)

};

} // namespace IoTTwinMaker
} // namespace QtAws

#endif
