// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDATASETREQUEST_H
#define QTAWS_DESCRIBEDATASETREQUEST_H

#include "personalizerequest.h"

namespace QtAws {
namespace Personalize {

class DescribeDatasetRequestPrivate;

class QTAWSPERSONALIZE_EXPORT DescribeDatasetRequest : public PersonalizeRequest {

public:
    DescribeDatasetRequest(const DescribeDatasetRequest &other);
    DescribeDatasetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDatasetRequest)

};

} // namespace Personalize
} // namespace QtAws

#endif
