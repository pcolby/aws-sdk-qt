// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDBPARAMETERSREQUEST_H
#define QTAWS_DESCRIBEDBPARAMETERSREQUEST_H

#include "neptunerequest.h"

namespace QtAws {
namespace Neptune {

class DescribeDBParametersRequestPrivate;

class QTAWSNEPTUNE_EXPORT DescribeDBParametersRequest : public NeptuneRequest {

public:
    DescribeDBParametersRequest(const DescribeDBParametersRequest &other);
    DescribeDBParametersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDBParametersRequest)

};

} // namespace Neptune
} // namespace QtAws

#endif
