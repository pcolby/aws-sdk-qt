// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEANOMALYDETECTORREQUEST_H
#define QTAWS_DELETEANOMALYDETECTORREQUEST_H

#include "cloudwatchrequest.h"

namespace QtAws {
namespace CloudWatch {

class DeleteAnomalyDetectorRequestPrivate;

class QTAWSCLOUDWATCH_EXPORT DeleteAnomalyDetectorRequest : public CloudWatchRequest {

public:
    DeleteAnomalyDetectorRequest(const DeleteAnomalyDetectorRequest &other);
    DeleteAnomalyDetectorRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAnomalyDetectorRequest)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
