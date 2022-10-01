// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERECOMMENDERREQUEST_H
#define QTAWS_DESCRIBERECOMMENDERREQUEST_H

#include "personalizerequest.h"

namespace QtAws {
namespace Personalize {

class DescribeRecommenderRequestPrivate;

class QTAWSPERSONALIZE_EXPORT DescribeRecommenderRequest : public PersonalizeRequest {

public:
    DescribeRecommenderRequest(const DescribeRecommenderRequest &other);
    DescribeRecommenderRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeRecommenderRequest)

};

} // namespace Personalize
} // namespace QtAws

#endif
