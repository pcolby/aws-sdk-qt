// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINFERENCESCHEDULERREQUEST_H
#define QTAWS_DESCRIBEINFERENCESCHEDULERREQUEST_H

#include "lookoutequipmentrequest.h"

namespace QtAws {
namespace LookoutEquipment {

class DescribeInferenceSchedulerRequestPrivate;

class QTAWSLOOKOUTEQUIPMENT_EXPORT DescribeInferenceSchedulerRequest : public LookoutEquipmentRequest {

public:
    DescribeInferenceSchedulerRequest(const DescribeInferenceSchedulerRequest &other);
    DescribeInferenceSchedulerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeInferenceSchedulerRequest)

};

} // namespace LookoutEquipment
} // namespace QtAws

#endif
