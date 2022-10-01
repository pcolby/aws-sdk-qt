// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDETECTSENTIMENTREQUEST_H
#define QTAWS_BATCHDETECTSENTIMENTREQUEST_H

#include "comprehendrequest.h"

namespace QtAws {
namespace Comprehend {

class BatchDetectSentimentRequestPrivate;

class QTAWSCOMPREHEND_EXPORT BatchDetectSentimentRequest : public ComprehendRequest {

public:
    BatchDetectSentimentRequest(const BatchDetectSentimentRequest &other);
    BatchDetectSentimentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchDetectSentimentRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif
