// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMODELREQUEST_H
#define QTAWS_DESCRIBEMODELREQUEST_H

#include "lookoutequipmentrequest.h"

namespace QtAws {
namespace LookoutEquipment {

class DescribeModelRequestPrivate;

class QTAWSLOOKOUTEQUIPMENT_EXPORT DescribeModelRequest : public LookoutEquipmentRequest {

public:
    DescribeModelRequest(const DescribeModelRequest &other);
    DescribeModelRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeModelRequest)

};

} // namespace LookoutEquipment
} // namespace QtAws

#endif
