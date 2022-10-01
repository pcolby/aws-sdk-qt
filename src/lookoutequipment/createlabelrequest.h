// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELABELREQUEST_H
#define QTAWS_CREATELABELREQUEST_H

#include "lookoutequipmentrequest.h"

namespace QtAws {
namespace LookoutEquipment {

class CreateLabelRequestPrivate;

class QTAWSLOOKOUTEQUIPMENT_EXPORT CreateLabelRequest : public LookoutEquipmentRequest {

public:
    CreateLabelRequest(const CreateLabelRequest &other);
    CreateLabelRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateLabelRequest)

};

} // namespace LookoutEquipment
} // namespace QtAws

#endif
