// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESOURCEPOLICYREQUEST_H
#define QTAWS_DESCRIBERESOURCEPOLICYREQUEST_H

#include "lexmodelsv2request.h"

namespace QtAws {
namespace LexModelsV2 {

class DescribeResourcePolicyRequestPrivate;

class QTAWSLEXMODELSV2_EXPORT DescribeResourcePolicyRequest : public LexModelsV2Request {

public:
    DescribeResourcePolicyRequest(const DescribeResourcePolicyRequest &other);
    DescribeResourcePolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeResourcePolicyRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
