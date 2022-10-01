// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDATASETREQUEST_H
#define QTAWS_DELETEDATASETREQUEST_H

#include "iotanalyticsrequest.h"

namespace QtAws {
namespace IoTAnalytics {

class DeleteDatasetRequestPrivate;

class QTAWSIOTANALYTICS_EXPORT DeleteDatasetRequest : public IoTAnalyticsRequest {

public:
    DeleteDatasetRequest(const DeleteDatasetRequest &other);
    DeleteDatasetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDatasetRequest)

};

} // namespace IoTAnalytics
} // namespace QtAws

#endif
