// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINFERENCESCHEDULERREQUEST_H
#define QTAWS_DELETEINFERENCESCHEDULERREQUEST_H

#include "lookoutequipmentrequest.h"

namespace QtAws {
namespace LookoutEquipment {

class DeleteInferenceSchedulerRequestPrivate;

class QTAWSLOOKOUTEQUIPMENT_EXPORT DeleteInferenceSchedulerRequest : public LookoutEquipmentRequest {

public:
    DeleteInferenceSchedulerRequest(const DeleteInferenceSchedulerRequest &other);
    DeleteInferenceSchedulerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteInferenceSchedulerRequest)

};

} // namespace LookoutEquipment
} // namespace QtAws

#endif
