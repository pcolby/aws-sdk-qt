// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELABELGROUPRESPONSE_H
#define QTAWS_UPDATELABELGROUPRESPONSE_H

#include "lookoutequipmentresponse.h"
#include "updatelabelgrouprequest.h"

namespace QtAws {
namespace LookoutEquipment {

class UpdateLabelGroupResponsePrivate;

class QTAWSLOOKOUTEQUIPMENT_EXPORT UpdateLabelGroupResponse : public LookoutEquipmentResponse {
    Q_OBJECT

public:
    UpdateLabelGroupResponse(const UpdateLabelGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateLabelGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateLabelGroupResponse)
    Q_DISABLE_COPY(UpdateLabelGroupResponse)

};

} // namespace LookoutEquipment
} // namespace QtAws

#endif
