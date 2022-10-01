// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINTENTREQUEST_H
#define QTAWS_DESCRIBEINTENTREQUEST_H

#include "lexmodelsv2request.h"

namespace QtAws {
namespace LexModelsV2 {

class DescribeIntentRequestPrivate;

class QTAWSLEXMODELSV2_EXPORT DescribeIntentRequest : public LexModelsV2Request {

public:
    DescribeIntentRequest(const DescribeIntentRequest &other);
    DescribeIntentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeIntentRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
