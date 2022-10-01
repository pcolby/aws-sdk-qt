// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLENSREVIEWRESPONSE_H
#define QTAWS_GETLENSREVIEWRESPONSE_H

#include "wellarchitectedresponse.h"
#include "getlensreviewrequest.h"

namespace QtAws {
namespace WellArchitected {

class GetLensReviewResponsePrivate;

class QTAWSWELLARCHITECTED_EXPORT GetLensReviewResponse : public WellArchitectedResponse {
    Q_OBJECT

public:
    GetLensReviewResponse(const GetLensReviewRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetLensReviewRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetLensReviewResponse)
    Q_DISABLE_COPY(GetLensReviewResponse)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
