// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREVIEWPOLICYRESULTSFORHITREQUEST_H
#define QTAWS_LISTREVIEWPOLICYRESULTSFORHITREQUEST_H

#include "mturkrequest.h"

namespace QtAws {
namespace MTurk {

class ListReviewPolicyResultsForHITRequestPrivate;

class QTAWSMTURK_EXPORT ListReviewPolicyResultsForHITRequest : public MTurkRequest {

public:
    ListReviewPolicyResultsForHITRequest(const ListReviewPolicyResultsForHITRequest &other);
    ListReviewPolicyResultsForHITRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListReviewPolicyResultsForHITRequest)

};

} // namespace MTurk
} // namespace QtAws

#endif
