// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPLICATIONINPUTPROCESSINGCONFIGURATIONRESPONSE_H
#define QTAWS_DELETEAPPLICATIONINPUTPROCESSINGCONFIGURATIONRESPONSE_H

#include "kinesisanalyticsv2response.h"
#include "deleteapplicationinputprocessingconfigurationrequest.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

class DeleteApplicationInputProcessingConfigurationResponsePrivate;

class QTAWSKINESISANALYTICSV2_EXPORT DeleteApplicationInputProcessingConfigurationResponse : public KinesisAnalyticsV2Response {
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

} // namespace KinesisAnalyticsV2
} // namespace QtAws

#endif
