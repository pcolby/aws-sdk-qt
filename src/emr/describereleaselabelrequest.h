// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERELEASELABELREQUEST_H
#define QTAWS_DESCRIBERELEASELABELREQUEST_H

#include "emrrequest.h"

namespace QtAws {
namespace Emr {

class DescribeReleaseLabelRequestPrivate;

class QTAWSEMR_EXPORT DescribeReleaseLabelRequest : public EmrRequest {

public:
    DescribeReleaseLabelRequest(const DescribeReleaseLabelRequest &other);
    DescribeReleaseLabelRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeReleaseLabelRequest)

};

} // namespace Emr
} // namespace QtAws

#endif
