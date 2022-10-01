// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPLICATIONREFERENCEDATASOURCEREQUEST_H
#define QTAWS_DELETEAPPLICATIONREFERENCEDATASOURCEREQUEST_H

#include "kinesisanalyticsrequest.h"

namespace QtAws {
namespace KinesisAnalytics {

class DeleteApplicationReferenceDataSourceRequestPrivate;

class QTAWSKINESISANALYTICS_EXPORT DeleteApplicationReferenceDataSourceRequest : public KinesisAnalyticsRequest {

public:
    DeleteApplicationReferenceDataSourceRequest(const DeleteApplicationReferenceDataSourceRequest &other);
    DeleteApplicationReferenceDataSourceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteApplicationReferenceDataSourceRequest)

};

} // namespace KinesisAnalytics
} // namespace QtAws

#endif
