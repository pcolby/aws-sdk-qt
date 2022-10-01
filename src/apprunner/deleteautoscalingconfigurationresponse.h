// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAUTOSCALINGCONFIGURATIONRESPONSE_H
#define QTAWS_DELETEAUTOSCALINGCONFIGURATIONRESPONSE_H

#include "apprunnerresponse.h"
#include "deleteautoscalingconfigurationrequest.h"

namespace QtAws {
namespace AppRunner {

class DeleteAutoScalingConfigurationResponsePrivate;

class QTAWSAPPRUNNER_EXPORT DeleteAutoScalingConfigurationResponse : public AppRunnerResponse {
    Q_OBJECT

public:
    DeleteAutoScalingConfigurationResponse(const DeleteAutoScalingConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteAutoScalingConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAutoScalingConfigurationResponse)
    Q_DISABLE_COPY(DeleteAutoScalingConfigurationResponse)

};

} // namespace AppRunner
} // namespace QtAws

#endif
