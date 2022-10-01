// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPLICATIONINPUTPROCESSINGCONFIGURATIONRESPONSE_H
#define QTAWS_DELETEAPPLICATIONINPUTPROCESSINGCONFIGURATIONRESPONSE_H

#include "kinesisanalyticsresponse.h"
#include "deleteapplicationinputprocessingconfigurationrequest.h"

namespace QtAws {
namespace KinesisAnalytics {

class DeleteApplicationInputProcessingConfigurationResponsePrivate;

class QTAWSKINESISANALYTICS_EXPORT DeleteApplicationInputProcessingConfigurationResponse : public KinesisAnalyticsResponse {
    Q_OBJECT

public:
    DeleteApplicationInputProcessingConfigurationResponse(const DeleteApplicationInputProcessingConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteApplicationInputProcessingConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteApplicationInputProcessingConfigurationResponse)
    Q_DISABLE_COPY(DeleteApplicationInputProcessingConfigurationResponse)

};

} // namespace KinesisAnalytics
} // namespace QtAws

#endif
