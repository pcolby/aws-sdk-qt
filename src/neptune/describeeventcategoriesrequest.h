// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEVENTCATEGORIESREQUEST_H
#define QTAWS_DESCRIBEEVENTCATEGORIESREQUEST_H

#include "neptunerequest.h"

namespace QtAws {
namespace Neptune {

class DescribeEventCategoriesRequestPrivate;

class QTAWSNEPTUNE_EXPORT DescribeEventCategoriesRequest : public NeptuneRequest {

public:
    DescribeEventCategoriesRequest(const DescribeEventCategoriesRequest &other);
    DescribeEventCategoriesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEventCategoriesRequest)

};

} // namespace Neptune
} // namespace QtAws

#endif
