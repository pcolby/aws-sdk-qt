// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELABELGROUPRESPONSE_H
#define QTAWS_CREATELABELGROUPRESPONSE_H

#include "lookoutequipmentresponse.h"
#include "createlabelgrouprequest.h"

namespace QtAws {
namespace LookoutEquipment {

class CreateLabelGroupResponsePrivate;

class QTAWSLOOKOUTEQUIPMENT_EXPORT CreateLabelGroupResponse : public LookoutEquipmentResponse {
    Q_OBJECT

public:
    CreateLabelGroupResponse(const CreateLabelGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateLabelGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateLabelGroupResponse)
    Q_DISABLE_COPY(CreateLabelGroupResponse)

};

} // namespace LookoutEquipment
} // namespace QtAws

#endif
