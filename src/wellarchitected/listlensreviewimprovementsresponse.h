// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLENSREVIEWIMPROVEMENTSRESPONSE_H
#define QTAWS_LISTLENSREVIEWIMPROVEMENTSRESPONSE_H

#include "wellarchitectedresponse.h"
#include "listlensreviewimprovementsrequest.h"

namespace QtAws {
namespace WellArchitected {

class ListLensReviewImprovementsResponsePrivate;

class QTAWSWELLARCHITECTED_EXPORT ListLensReviewImprovementsResponse : public WellArchitectedResponse {
    Q_OBJECT

public:
    ListLensReviewImprovementsResponse(const ListLensReviewImprovementsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListLensReviewImprovementsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListLensReviewImprovementsResponse)
    Q_DISABLE_COPY(ListLensReviewImprovementsResponse)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
