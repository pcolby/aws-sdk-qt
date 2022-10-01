// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDATASETCONTENTREQUEST_H
#define QTAWS_CREATEDATASETCONTENTREQUEST_H

#include "iotanalyticsrequest.h"

namespace QtAws {
namespace IoTAnalytics {

class CreateDatasetContentRequestPrivate;

class QTAWSIOTANALYTICS_EXPORT CreateDatasetContentRequest : public IoTAnalyticsRequest {

public:
    CreateDatasetContentRequest(const CreateDatasetContentRequest &other);
    CreateDatasetContentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDatasetContentRequest)

};

} // namespace IoTAnalytics
} // namespace QtAws

#endif
