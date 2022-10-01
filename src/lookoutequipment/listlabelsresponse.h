// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLABELSRESPONSE_H
#define QTAWS_LISTLABELSRESPONSE_H

#include "lookoutequipmentresponse.h"
#include "listlabelsrequest.h"

namespace QtAws {
namespace LookoutEquipment {

class ListLabelsResponsePrivate;

class QTAWSLOOKOUTEQUIPMENT_EXPORT ListLabelsResponse : public LookoutEquipmentResponse {
    Q_OBJECT

public:
    ListLabelsResponse(const ListLabelsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListLabelsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListLabelsResponse)
    Q_DISABLE_COPY(ListLabelsResponse)

};

} // namespace LookoutEquipment
} // namespace QtAws

#endif
