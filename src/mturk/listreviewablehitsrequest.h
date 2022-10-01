// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREVIEWABLEHITSREQUEST_H
#define QTAWS_LISTREVIEWABLEHITSREQUEST_H

#include "mturkrequest.h"

namespace QtAws {
namespace MTurk {

class ListReviewableHITsRequestPrivate;

class QTAWSMTURK_EXPORT ListReviewableHITsRequest : public MTurkRequest {

public:
    ListReviewableHITsRequest(const ListReviewableHITsRequest &other);
    ListReviewableHITsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListReviewableHITsRequest)

};

} // namespace MTurk
} // namespace QtAws

#endif
