// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACCOUNTCUSTOMIZATIONREQUEST_H
#define QTAWS_DESCRIBEACCOUNTCUSTOMIZATIONREQUEST_H

#include "quicksightrequest.h"

namespace QtAws {
namespace QuickSight {

class DescribeAccountCustomizationRequestPrivate;

class QTAWSQUICKSIGHT_EXPORT DescribeAccountCustomizationRequest : public QuickSightRequest {

public:
    DescribeAccountCustomizationRequest(const DescribeAccountCustomizationRequest &other);
    DescribeAccountCustomizationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAccountCustomizationRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
