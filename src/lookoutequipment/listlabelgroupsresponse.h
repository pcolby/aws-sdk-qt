// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLABELGROUPSRESPONSE_H
#define QTAWS_LISTLABELGROUPSRESPONSE_H

#include "lookoutequipmentresponse.h"
#include "listlabelgroupsrequest.h"

namespace QtAws {
namespace LookoutEquipment {

class ListLabelGroupsResponsePrivate;

class QTAWSLOOKOUTEQUIPMENT_EXPORT ListLabelGroupsResponse : public LookoutEquipmentResponse {
    Q_OBJECT

public:
    ListLabelGroupsResponse(const ListLabelGroupsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListLabelGroupsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListLabelGroupsResponse)
    Q_DISABLE_COPY(ListLabelGroupsResponse)

};

} // namespace LookoutEquipment
} // namespace QtAws

#endif
