// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDATASETCONTENTREQUEST_H
#define QTAWS_GETDATASETCONTENTREQUEST_H

#include "iotanalyticsrequest.h"

namespace QtAws {
namespace IoTAnalytics {

class GetDatasetContentRequestPrivate;

class QTAWSIOTANALYTICS_EXPORT GetDatasetContentRequest : public IoTAnalyticsRequest {

public:
    GetDatasetContentRequest(const GetDatasetContentRequest &other);
    GetDatasetContentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDatasetContentRequest)

};

} // namespace IoTAnalytics
} // namespace QtAws

#endif
