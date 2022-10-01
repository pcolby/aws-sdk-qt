// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATASETSRESPONSE_H
#define QTAWS_LISTDATASETSRESPONSE_H

#include "lookoutequipmentresponse.h"
#include "listdatasetsrequest.h"

namespace QtAws {
namespace LookoutEquipment {

class ListDatasetsResponsePrivate;

class QTAWSLOOKOUTEQUIPMENT_EXPORT ListDatasetsResponse : public LookoutEquipmentResponse {
    Q_OBJECT

public:
    ListDatasetsResponse(const ListDatasetsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListDatasetsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDatasetsResponse)
    Q_DISABLE_COPY(ListDatasetsResponse)

};

} // namespace LookoutEquipment
} // namespace QtAws

#endif
