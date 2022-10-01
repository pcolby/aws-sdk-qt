// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETHESAURUSREQUEST_H
#define QTAWS_DESCRIBETHESAURUSREQUEST_H

#include "kendrarequest.h"

namespace QtAws {
namespace Kendra {

class DescribeThesaurusRequestPrivate;

class QTAWSKENDRA_EXPORT DescribeThesaurusRequest : public KendraRequest {

public:
    DescribeThesaurusRequest(const DescribeThesaurusRequest &other);
    DescribeThesaurusRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeThesaurusRequest)

};

} // namespace Kendra
} // namespace QtAws

#endif
