// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETECTTARGETEDSENTIMENTREQUEST_H
#define QTAWS_DETECTTARGETEDSENTIMENTREQUEST_H

#include "comprehendrequest.h"

namespace QtAws {
namespace Comprehend {

class DetectTargetedSentimentRequestPrivate;

class QTAWSCOMPREHEND_EXPORT DetectTargetedSentimentRequest : public ComprehendRequest {

public:
    DetectTargetedSentimentRequest(const DetectTargetedSentimentRequest &other);
    DetectTargetedSentimentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DetectTargetedSentimentRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif
