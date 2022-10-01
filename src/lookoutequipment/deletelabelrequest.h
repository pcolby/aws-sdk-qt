// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELABELREQUEST_H
#define QTAWS_DELETELABELREQUEST_H

#include "lookoutequipmentrequest.h"

namespace QtAws {
namespace LookoutEquipment {

class DeleteLabelRequestPrivate;

class QTAWSLOOKOUTEQUIPMENT_EXPORT DeleteLabelRequest : public LookoutEquipmentRequest {

public:
    DeleteLabelRequest(const DeleteLabelRequest &other);
    DeleteLabelRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteLabelRequest)

};

} // namespace LookoutEquipment
} // namespace QtAws

#endif
