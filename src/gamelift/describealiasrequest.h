// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEALIASREQUEST_H
#define QTAWS_DESCRIBEALIASREQUEST_H

#include "gameliftrequest.h"

namespace QtAws {
namespace GameLift {

class DescribeAliasRequestPrivate;

class QTAWSGAMELIFT_EXPORT DescribeAliasRequest : public GameLiftRequest {

public:
    DescribeAliasRequest(const DescribeAliasRequest &other);
    DescribeAliasRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAliasRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
