// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDATASTOREREQUEST_H
#define QTAWS_CREATEDATASTOREREQUEST_H

#include "iotanalyticsrequest.h"

namespace QtAws {
namespace IoTAnalytics {

class CreateDatastoreRequestPrivate;

class QTAWSIOTANALYTICS_EXPORT CreateDatastoreRequest : public IoTAnalyticsRequest {

public:
    CreateDatastoreRequest(const CreateDatastoreRequest &other);
    CreateDatastoreRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDatastoreRequest)

};

} // namespace IoTAnalytics
} // namespace QtAws

#endif
