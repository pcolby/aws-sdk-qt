// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPLICATIONREFERENCEDATASOURCEREQUEST_H
#define QTAWS_DELETEAPPLICATIONREFERENCEDATASOURCEREQUEST_H

#include "kinesisanalyticsv2request.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

class DeleteApplicationReferenceDataSourceRequestPrivate;

class QTAWSKINESISANALYTICSV2_EXPORT DeleteApplicationReferenceDataSourceRequest : public KinesisAnalyticsV2Request {

public:
    DeleteApplicationReferenceDataSourceRequest(const DeleteApplicationReferenceDataSourceRequest &other);
    DeleteApplicationReferenceDataSourceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteApplicationReferenceDataSourceRequest)

};

} // namespace KinesisAnalyticsV2
} // namespace QtAws

#endif
