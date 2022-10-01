// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDATAINGESTIONJOBREQUEST_H
#define QTAWS_DESCRIBEDATAINGESTIONJOBREQUEST_H

#include "lookoutequipmentrequest.h"

namespace QtAws {
namespace LookoutEquipment {

class DescribeDataIngestionJobRequestPrivate;

class QTAWSLOOKOUTEQUIPMENT_EXPORT DescribeDataIngestionJobRequest : public LookoutEquipmentRequest {

public:
    DescribeDataIngestionJobRequest(const DescribeDataIngestionJobRequest &other);
    DescribeDataIngestionJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDataIngestionJobRequest)

};

} // namespace LookoutEquipment
} // namespace QtAws

#endif
