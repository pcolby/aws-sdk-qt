// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEALGORITHMREQUEST_H
#define QTAWS_DESCRIBEALGORITHMREQUEST_H

#include "personalizerequest.h"

namespace QtAws {
namespace Personalize {

class DescribeAlgorithmRequestPrivate;

class QTAWSPERSONALIZE_EXPORT DescribeAlgorithmRequest : public PersonalizeRequest {

public:
    DescribeAlgorithmRequest(const DescribeAlgorithmRequest &other);
    DescribeAlgorithmRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAlgorithmRequest)

};

} // namespace Personalize
} // namespace QtAws

#endif
