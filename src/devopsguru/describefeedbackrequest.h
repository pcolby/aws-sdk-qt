// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFEEDBACKREQUEST_H
#define QTAWS_DESCRIBEFEEDBACKREQUEST_H

#include "devopsgururequest.h"

namespace QtAws {
namespace DevOpsGuru {

class DescribeFeedbackRequestPrivate;

class QTAWSDEVOPSGURU_EXPORT DescribeFeedbackRequest : public DevOpsGuruRequest {

public:
    DescribeFeedbackRequest(const DescribeFeedbackRequest &other);
    DescribeFeedbackRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeFeedbackRequest)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
