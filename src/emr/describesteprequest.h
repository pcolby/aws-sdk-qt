// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTEPREQUEST_H
#define QTAWS_DESCRIBESTEPREQUEST_H

#include "emrrequest.h"

namespace QtAws {
namespace Emr {

class DescribeStepRequestPrivate;

class QTAWSEMR_EXPORT DescribeStepRequest : public EmrRequest {

public:
    DescribeStepRequest(const DescribeStepRequest &other);
    DescribeStepRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeStepRequest)

};

} // namespace Emr
} // namespace QtAws

#endif
