// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACTIVITYREQUEST_H
#define QTAWS_DESCRIBEACTIVITYREQUEST_H

#include "sfnrequest.h"

namespace QtAws {
namespace Sfn {

class DescribeActivityRequestPrivate;

class QTAWSSFN_EXPORT DescribeActivityRequest : public SfnRequest {

public:
    DescribeActivityRequest(const DescribeActivityRequest &other);
    DescribeActivityRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeActivityRequest)

};

} // namespace Sfn
} // namespace QtAws

#endif
