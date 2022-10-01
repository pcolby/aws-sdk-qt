// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLENSREVIEWSREQUEST_H
#define QTAWS_LISTLENSREVIEWSREQUEST_H

#include "wellarchitectedrequest.h"

namespace QtAws {
namespace WellArchitected {

class ListLensReviewsRequestPrivate;

class QTAWSWELLARCHITECTED_EXPORT ListLensReviewsRequest : public WellArchitectedRequest {

public:
    ListLensReviewsRequest(const ListLensReviewsRequest &other);
    ListLensReviewsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListLensReviewsRequest)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
