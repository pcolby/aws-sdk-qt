// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLENSREVIEWREQUEST_H
#define QTAWS_GETLENSREVIEWREQUEST_H

#include "wellarchitectedrequest.h"

namespace QtAws {
namespace WellArchitected {

class GetLensReviewRequestPrivate;

class QTAWSWELLARCHITECTED_EXPORT GetLensReviewRequest : public WellArchitectedRequest {

public:
    GetLensReviewRequest(const GetLensReviewRequest &other);
    GetLensReviewRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetLensReviewRequest)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
