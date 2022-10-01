// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREVIEWPOLICYRESULTSFORHITRESPONSE_H
#define QTAWS_LISTREVIEWPOLICYRESULTSFORHITRESPONSE_H

#include "mturkresponse.h"
#include "listreviewpolicyresultsforhitrequest.h"

namespace QtAws {
namespace MTurk {

class ListReviewPolicyResultsForHITResponsePrivate;

class QTAWSMTURK_EXPORT ListReviewPolicyResultsForHITResponse : public MTurkResponse {
    Q_OBJECT

public:
    ListReviewPolicyResultsForHITResponse(const ListReviewPolicyResultsForHITRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListReviewPolicyResultsForHITRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListReviewPolicyResultsForHITResponse)
    Q_DISABLE_COPY(ListReviewPolicyResultsForHITResponse)

};

} // namespace MTurk
} // namespace QtAws

#endif
