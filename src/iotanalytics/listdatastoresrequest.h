// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATASTORESREQUEST_H
#define QTAWS_LISTDATASTORESREQUEST_H

#include "iotanalyticsrequest.h"

namespace QtAws {
namespace IoTAnalytics {

class ListDatastoresRequestPrivate;

class QTAWSIOTANALYTICS_EXPORT ListDatastoresRequest : public IoTAnalyticsRequest {

public:
    ListDatastoresRequest(const ListDatastoresRequest &other);
    ListDatastoresRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDatastoresRequest)

};

} // namespace IoTAnalytics
} // namespace QtAws

#endif
