// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEXCLUSIONSREQUEST_H
#define QTAWS_DESCRIBEEXCLUSIONSREQUEST_H

#include "inspectorrequest.h"

namespace QtAws {
namespace Inspector {

class DescribeExclusionsRequestPrivate;

class QTAWSINSPECTOR_EXPORT DescribeExclusionsRequest : public InspectorRequest {

public:
    DescribeExclusionsRequest(const DescribeExclusionsRequest &other);
    DescribeExclusionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeExclusionsRequest)

};

} // namespace Inspector
} // namespace QtAws

#endif
