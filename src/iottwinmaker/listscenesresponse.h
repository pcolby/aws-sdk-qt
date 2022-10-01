// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSCENESRESPONSE_H
#define QTAWS_LISTSCENESRESPONSE_H

#include "iottwinmakerresponse.h"
#include "listscenesrequest.h"

namespace QtAws {
namespace IoTTwinMaker {

class ListScenesResponsePrivate;

class QTAWSIOTTWINMAKER_EXPORT ListScenesResponse : public IoTTwinMakerResponse {
    Q_OBJECT

public:
    ListScenesResponse(const ListScenesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListScenesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListScenesResponse)
    Q_DISABLE_COPY(ListScenesResponse)

};

} // namespace IoTTwinMaker
} // namespace QtAws

#endif
