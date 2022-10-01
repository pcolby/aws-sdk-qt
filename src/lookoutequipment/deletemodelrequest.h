// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMODELREQUEST_H
#define QTAWS_DELETEMODELREQUEST_H

#include "lookoutequipmentrequest.h"

namespace QtAws {
namespace LookoutEquipment {

class DeleteModelRequestPrivate;

class QTAWSLOOKOUTEQUIPMENT_EXPORT DeleteModelRequest : public LookoutEquipmentRequest {

public:
    DeleteModelRequest(const DeleteModelRequest &other);
    DeleteModelRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteModelRequest)

};

} // namespace LookoutEquipment
} // namespace QtAws

#endif
