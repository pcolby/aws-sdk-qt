// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLENSREVIEWSRESPONSE_H
#define QTAWS_LISTLENSREVIEWSRESPONSE_H

#include "wellarchitectedresponse.h"
#include "listlensreviewsrequest.h"

namespace QtAws {
namespace WellArchitected {

class ListLensReviewsResponsePrivate;

class QTAWSWELLARCHITECTED_EXPORT ListLensReviewsResponse : public WellArchitectedResponse {
    Q_OBJECT

public:
    ListLensReviewsResponse(const ListLensReviewsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListLensReviewsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListLensReviewsResponse)
    Q_DISABLE_COPY(ListLensReviewsResponse)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
