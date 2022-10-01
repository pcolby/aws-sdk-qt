// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTANOMALYDETECTORREQUEST_H
#define QTAWS_PUTANOMALYDETECTORREQUEST_H

#include "cloudwatchrequest.h"

namespace QtAws {
namespace CloudWatch {

class PutAnomalyDetectorRequestPrivate;

class QTAWSCLOUDWATCH_EXPORT PutAnomalyDetectorRequest : public CloudWatchRequest {

public:
    PutAnomalyDetectorRequest(const PutAnomalyDetectorRequest &other);
    PutAnomalyDetectorRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutAnomalyDetectorRequest)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
