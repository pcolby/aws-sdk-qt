// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMODELSRESPONSE_H
#define QTAWS_LISTMODELSRESPONSE_H

#include "lookoutequipmentresponse.h"
#include "listmodelsrequest.h"

namespace QtAws {
namespace LookoutEquipment {

class ListModelsResponsePrivate;

class QTAWSLOOKOUTEQUIPMENT_EXPORT ListModelsResponse : public LookoutEquipmentResponse {
    Q_OBJECT

public:
    ListModelsResponse(const ListModelsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListModelsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListModelsResponse)
    Q_DISABLE_COPY(ListModelsResponse)

};

} // namespace LookoutEquipment
} // namespace QtAws

#endif
