// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPGRADELENSREVIEWREQUEST_H
#define QTAWS_UPGRADELENSREVIEWREQUEST_H

#include "wellarchitectedrequest.h"

namespace QtAws {
namespace WellArchitected {

class UpgradeLensReviewRequestPrivate;

class QTAWSWELLARCHITECTED_EXPORT UpgradeLensReviewRequest : public WellArchitectedRequest {

public:
    UpgradeLensReviewRequest(const UpgradeLensReviewRequest &other);
    UpgradeLensReviewRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpgradeLensReviewRequest)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
