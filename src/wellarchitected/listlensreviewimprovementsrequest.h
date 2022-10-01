// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLENSREVIEWIMPROVEMENTSREQUEST_H
#define QTAWS_LISTLENSREVIEWIMPROVEMENTSREQUEST_H

#include "wellarchitectedrequest.h"

namespace QtAws {
namespace WellArchitected {

class ListLensReviewImprovementsRequestPrivate;

class QTAWSWELLARCHITECTED_EXPORT ListLensReviewImprovementsRequest : public WellArchitectedRequest {

public:
    ListLensReviewImprovementsRequest(const ListLensReviewImprovementsRequest &other);
    ListLensReviewImprovementsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListLensReviewImprovementsRequest)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
