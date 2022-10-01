// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAUTOSCALINGCONFIGURATIONSRESPONSE_H
#define QTAWS_LISTAUTOSCALINGCONFIGURATIONSRESPONSE_H

#include "apprunnerresponse.h"
#include "listautoscalingconfigurationsrequest.h"

namespace QtAws {
namespace AppRunner {

class ListAutoScalingConfigurationsResponsePrivate;

class QTAWSAPPRUNNER_EXPORT ListAutoScalingConfigurationsResponse : public AppRunnerResponse {
    Q_OBJECT

public:
    ListAutoScalingConfigurationsResponse(const ListAutoScalingConfigurationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAutoScalingConfigurationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAutoScalingConfigurationsResponse)
    Q_DISABLE_COPY(ListAutoScalingConfigurationsResponse)

};

} // namespace AppRunner
} // namespace QtAws

#endif
