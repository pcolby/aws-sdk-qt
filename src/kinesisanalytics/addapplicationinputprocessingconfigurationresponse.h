// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDAPPLICATIONINPUTPROCESSINGCONFIGURATIONRESPONSE_H
#define QTAWS_ADDAPPLICATIONINPUTPROCESSINGCONFIGURATIONRESPONSE_H

#include "kinesisanalyticsresponse.h"
#include "addapplicationinputprocessingconfigurationrequest.h"

namespace QtAws {
namespace KinesisAnalytics {

class AddApplicationInputProcessingConfigurationResponsePrivate;

class QTAWSKINESISANALYTICS_EXPORT AddApplicationInputProcessingConfigurationResponse : public KinesisAnalyticsResponse {
    Q_OBJECT

public:
    AddApplicationInputProcessingConfigurationResponse(const AddApplicationInputProcessingConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AddApplicationInputProcessingConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AddApplicationInputProcessingConfigurationResponse)
    Q_DISABLE_COPY(AddApplicationInputProcessingConfigurationResponse)

};

} // namespace KinesisAnalytics
} // namespace QtAws

#endif
