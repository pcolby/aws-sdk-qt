// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELABELGROUPRESPONSE_H
#define QTAWS_DESCRIBELABELGROUPRESPONSE_H

#include "lookoutequipmentresponse.h"
#include "describelabelgrouprequest.h"

namespace QtAws {
namespace LookoutEquipment {

class DescribeLabelGroupResponsePrivate;

class QTAWSLOOKOUTEQUIPMENT_EXPORT DescribeLabelGroupResponse : public LookoutEquipmentResponse {
    Q_OBJECT

public:
    DescribeLabelGroupResponse(const DescribeLabelGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeLabelGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeLabelGroupResponse)
    Q_DISABLE_COPY(DescribeLabelGroupResponse)

};

} // namespace LookoutEquipment
} // namespace QtAws

#endif
