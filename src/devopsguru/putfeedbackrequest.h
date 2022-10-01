// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTFEEDBACKREQUEST_H
#define QTAWS_PUTFEEDBACKREQUEST_H

#include "devopsgururequest.h"

namespace QtAws {
namespace DevOpsGuru {

class PutFeedbackRequestPrivate;

class QTAWSDEVOPSGURU_EXPORT PutFeedbackRequest : public DevOpsGuruRequest {

public:
    PutFeedbackRequest(const PutFeedbackRequest &other);
    PutFeedbackRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutFeedbackRequest)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
