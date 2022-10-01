// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELABELGROUPREQUEST_H
#define QTAWS_CREATELABELGROUPREQUEST_H

#include "lookoutequipmentrequest.h"

namespace QtAws {
namespace LookoutEquipment {

class CreateLabelGroupRequestPrivate;

class QTAWSLOOKOUTEQUIPMENT_EXPORT CreateLabelGroupRequest : public LookoutEquipmentRequest {

public:
    CreateLabelGroupRequest(const CreateLabelGroupRequest &other);
    CreateLabelGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateLabelGroupRequest)

};

} // namespace LookoutEquipment
} // namespace QtAws

#endif
