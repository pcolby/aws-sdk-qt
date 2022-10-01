// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDATASTOREREQUEST_H
#define QTAWS_UPDATEDATASTOREREQUEST_H

#include "iotanalyticsrequest.h"

namespace QtAws {
namespace IoTAnalytics {

class UpdateDatastoreRequestPrivate;

class QTAWSIOTANALYTICS_EXPORT UpdateDatastoreRequest : public IoTAnalyticsRequest {

public:
    UpdateDatastoreRequest(const UpdateDatastoreRequest &other);
    UpdateDatastoreRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDatastoreRequest)

};

} // namespace IoTAnalytics
} // namespace QtAws

#endif
