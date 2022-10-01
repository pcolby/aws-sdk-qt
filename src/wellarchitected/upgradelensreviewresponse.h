// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPGRADELENSREVIEWRESPONSE_H
#define QTAWS_UPGRADELENSREVIEWRESPONSE_H

#include "wellarchitectedresponse.h"
#include "upgradelensreviewrequest.h"

namespace QtAws {
namespace WellArchitected {

class UpgradeLensReviewResponsePrivate;

class QTAWSWELLARCHITECTED_EXPORT UpgradeLensReviewResponse : public WellArchitectedResponse {
    Q_OBJECT

public:
    UpgradeLensReviewResponse(const UpgradeLensReviewRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpgradeLensReviewRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpgradeLensReviewResponse)
    Q_DISABLE_COPY(UpgradeLensReviewResponse)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
