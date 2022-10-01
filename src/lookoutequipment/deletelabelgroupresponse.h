// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELABELGROUPRESPONSE_H
#define QTAWS_DELETELABELGROUPRESPONSE_H

#include "lookoutequipmentresponse.h"
#include "deletelabelgrouprequest.h"

namespace QtAws {
namespace LookoutEquipment {

class DeleteLabelGroupResponsePrivate;

class QTAWSLOOKOUTEQUIPMENT_EXPORT DeleteLabelGroupResponse : public LookoutEquipmentResponse {
    Q_OBJECT

public:
    DeleteLabelGroupResponse(const DeleteLabelGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteLabelGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteLabelGroupResponse)
    Q_DISABLE_COPY(DeleteLabelGroupResponse)

};

} // namespace LookoutEquipment
} // namespace QtAws

#endif
