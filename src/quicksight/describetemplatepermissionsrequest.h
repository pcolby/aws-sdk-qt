// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETEMPLATEPERMISSIONSREQUEST_H
#define QTAWS_DESCRIBETEMPLATEPERMISSIONSREQUEST_H

#include "quicksightrequest.h"

namespace QtAws {
namespace QuickSight {

class DescribeTemplatePermissionsRequestPrivate;

class QTAWSQUICKSIGHT_EXPORT DescribeTemplatePermissionsRequest : public QuickSightRequest {

public:
    DescribeTemplatePermissionsRequest(const DescribeTemplatePermissionsRequest &other);
    DescribeTemplatePermissionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeTemplatePermissionsRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
