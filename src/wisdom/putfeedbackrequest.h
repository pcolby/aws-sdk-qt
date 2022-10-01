// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTFEEDBACKREQUEST_H
#define QTAWS_PUTFEEDBACKREQUEST_H

#include "wisdomrequest.h"

namespace QtAws {
namespace Wisdom {

class PutFeedbackRequestPrivate;

class QTAWSWISDOM_EXPORT PutFeedbackRequest : public WisdomRequest {

public:
    PutFeedbackRequest(const PutFeedbackRequest &other);
    PutFeedbackRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutFeedbackRequest)

};

} // namespace Wisdom
} // namespace QtAws

#endif
