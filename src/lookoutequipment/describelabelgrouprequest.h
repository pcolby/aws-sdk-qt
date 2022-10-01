// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELABELGROUPREQUEST_H
#define QTAWS_DESCRIBELABELGROUPREQUEST_H

#include "lookoutequipmentrequest.h"

namespace QtAws {
namespace LookoutEquipment {

class DescribeLabelGroupRequestPrivate;

class QTAWSLOOKOUTEQUIPMENT_EXPORT DescribeLabelGroupRequest : public LookoutEquipmentRequest {

public:
    DescribeLabelGroupRequest(const DescribeLabelGroupRequest &other);
    DescribeLabelGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeLabelGroupRequest)

};

} // namespace LookoutEquipment
} // namespace QtAws

#endif
