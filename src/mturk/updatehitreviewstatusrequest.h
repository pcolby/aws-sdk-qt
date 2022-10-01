// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEHITREVIEWSTATUSREQUEST_H
#define QTAWS_UPDATEHITREVIEWSTATUSREQUEST_H

#include "mturkrequest.h"

namespace QtAws {
namespace MTurk {

class UpdateHITReviewStatusRequestPrivate;

class QTAWSMTURK_EXPORT UpdateHITReviewStatusRequest : public MTurkRequest {

public:
    UpdateHITReviewStatusRequest(const UpdateHITReviewStatusRequest &other);
    UpdateHITReviewStatusRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateHITReviewStatusRequest)

};

} // namespace MTurk
} // namespace QtAws

#endif
