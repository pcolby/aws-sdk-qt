// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPLICATIONINPUTPROCESSINGCONFIGURATIONREQUEST_H
#define QTAWS_DELETEAPPLICATIONINPUTPROCESSINGCONFIGURATIONREQUEST_H

#include "kinesisanalyticsrequest.h"

namespace QtAws {
namespace KinesisAnalytics {

class DeleteApplicationInputProcessingConfigurationRequestPrivate;

class QTAWSKINESISANALYTICS_EXPORT DeleteApplicationInputProcessingConfigurationRequest : public KinesisAnalyticsRequest {

public:
    DeleteApplicationInputProcessingConfigurationRequest(const DeleteApplicationInputProcessingConfigurationRequest &other);
    DeleteApplicationInputProcessingConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteApplicationInputProcessingConfigurationRequest)

};

} // namespace KinesisAnalytics
} // namespace QtAws

#endif
