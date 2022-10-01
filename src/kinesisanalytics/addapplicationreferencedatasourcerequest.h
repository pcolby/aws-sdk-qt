// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDAPPLICATIONREFERENCEDATASOURCEREQUEST_H
#define QTAWS_ADDAPPLICATIONREFERENCEDATASOURCEREQUEST_H

#include "kinesisanalyticsrequest.h"

namespace QtAws {
namespace KinesisAnalytics {

class AddApplicationReferenceDataSourceRequestPrivate;

class QTAWSKINESISANALYTICS_EXPORT AddApplicationReferenceDataSourceRequest : public KinesisAnalyticsRequest {

public:
    AddApplicationReferenceDataSourceRequest(const AddApplicationReferenceDataSourceRequest &other);
    AddApplicationReferenceDataSourceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AddApplicationReferenceDataSourceRequest)

};

} // namespace KinesisAnalytics
} // namespace QtAws

#endif
