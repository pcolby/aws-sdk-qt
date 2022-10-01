// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELABELGROUPREQUEST_H
#define QTAWS_DELETELABELGROUPREQUEST_H

#include "lookoutequipmentrequest.h"

namespace QtAws {
namespace LookoutEquipment {

class DeleteLabelGroupRequestPrivate;

class QTAWSLOOKOUTEQUIPMENT_EXPORT DeleteLabelGroupRequest : public LookoutEquipmentRequest {

public:
    DeleteLabelGroupRequest(const DeleteLabelGroupRequest &other);
    DeleteLabelGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteLabelGroupRequest)

};

} // namespace LookoutEquipment
} // namespace QtAws

#endif
