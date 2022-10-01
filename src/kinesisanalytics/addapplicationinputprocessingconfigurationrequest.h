// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDAPPLICATIONINPUTPROCESSINGCONFIGURATIONREQUEST_H
#define QTAWS_ADDAPPLICATIONINPUTPROCESSINGCONFIGURATIONREQUEST_H

#include "kinesisanalyticsrequest.h"

namespace QtAws {
namespace KinesisAnalytics {

class AddApplicationInputProcessingConfigurationRequestPrivate;

class QTAWSKINESISANALYTICS_EXPORT AddApplicationInputProcessingConfigurationRequest : public KinesisAnalyticsRequest {

public:
    AddApplicationInputProcessingConfigurationRequest(const AddApplicationInputProcessingConfigurationRequest &other);
    AddApplicationInputProcessingConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AddApplicationInputProcessingConfigurationRequest)

};

} // namespace KinesisAnalytics
} // namespace QtAws

#endif
