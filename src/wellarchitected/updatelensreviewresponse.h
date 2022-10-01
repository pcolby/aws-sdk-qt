// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELENSREVIEWRESPONSE_H
#define QTAWS_UPDATELENSREVIEWRESPONSE_H

#include "wellarchitectedresponse.h"
#include "updatelensreviewrequest.h"

namespace QtAws {
namespace WellArchitected {

class UpdateLensReviewResponsePrivate;

class QTAWSWELLARCHITECTED_EXPORT UpdateLensReviewResponse : public WellArchitectedResponse {
    Q_OBJECT

public:
    UpdateLensReviewResponse(const UpdateLensReviewRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateLensReviewRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateLensReviewResponse)
    Q_DISABLE_COPY(UpdateLensReviewResponse)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
