// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDATASTOREREQUEST_H
#define QTAWS_DELETEDATASTOREREQUEST_H

#include "iotanalyticsrequest.h"

namespace QtAws {
namespace IoTAnalytics {

class DeleteDatastoreRequestPrivate;

class QTAWSIOTANALYTICS_EXPORT DeleteDatastoreRequest : public IoTAnalyticsRequest {

public:
    DeleteDatastoreRequest(const DeleteDatastoreRequest &other);
    DeleteDatastoreRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDatastoreRequest)

};

} // namespace IoTAnalytics
} // namespace QtAws

#endif
