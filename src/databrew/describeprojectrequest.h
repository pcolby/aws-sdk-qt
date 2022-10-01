// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPROJECTREQUEST_H
#define QTAWS_DESCRIBEPROJECTREQUEST_H

#include "databrewrequest.h"

namespace QtAws {
namespace DataBrew {

class DescribeProjectRequestPrivate;

class QTAWSDATABREW_EXPORT DescribeProjectRequest : public DataBrewRequest {

public:
    DescribeProjectRequest(const DescribeProjectRequest &other);
    DescribeProjectRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeProjectRequest)

};

} // namespace DataBrew
} // namespace QtAws

#endif
