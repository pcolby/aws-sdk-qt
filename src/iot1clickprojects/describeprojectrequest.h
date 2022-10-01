// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPROJECTREQUEST_H
#define QTAWS_DESCRIBEPROJECTREQUEST_H

#include "iot1clickprojectsrequest.h"

namespace QtAws {
namespace IoT1ClickProjects {

class DescribeProjectRequestPrivate;

class QTAWSIOT1CLICKPROJECTS_EXPORT DescribeProjectRequest : public IoT1ClickProjectsRequest {

public:
    DescribeProjectRequest(const DescribeProjectRequest &other);
    DescribeProjectRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeProjectRequest)

};

} // namespace IoT1ClickProjects
} // namespace QtAws

#endif
