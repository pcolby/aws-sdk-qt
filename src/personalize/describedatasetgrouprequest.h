// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDATASETGROUPREQUEST_H
#define QTAWS_DESCRIBEDATASETGROUPREQUEST_H

#include "personalizerequest.h"

namespace QtAws {
namespace Personalize {

class DescribeDatasetGroupRequestPrivate;

class QTAWSPERSONALIZE_EXPORT DescribeDatasetGroupRequest : public PersonalizeRequest {

public:
    DescribeDatasetGroupRequest(const DescribeDatasetGroupRequest &other);
    DescribeDatasetGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDatasetGroupRequest)

};

} // namespace Personalize
} // namespace QtAws

#endif
