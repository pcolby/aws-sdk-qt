// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETEMPLATEREQUEST_H
#define QTAWS_DESCRIBETEMPLATEREQUEST_H

#include "quicksightrequest.h"

namespace QtAws {
namespace QuickSight {

class DescribeTemplateRequestPrivate;

class QTAWSQUICKSIGHT_EXPORT DescribeTemplateRequest : public QuickSightRequest {

public:
    DescribeTemplateRequest(const DescribeTemplateRequest &other);
    DescribeTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeTemplateRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
