// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECOMPONENTCONFIGURATIONRESPONSE_H
#define QTAWS_UPDATECOMPONENTCONFIGURATIONRESPONSE_H

#include "applicationinsightsresponse.h"
#include "updatecomponentconfigurationrequest.h"

namespace QtAws {
namespace ApplicationInsights {

class UpdateComponentConfigurationResponsePrivate;

class QTAWSAPPLICATIONINSIGHTS_EXPORT UpdateComponentConfigurationResponse : public ApplicationInsightsResponse {
    Q_OBJECT

public:
    UpdateComponentConfigurationResponse(const UpdateComponentConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateComponentConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateComponentConfigurationResponse)
    Q_DISABLE_COPY(UpdateComponentConfigurationResponse)

};

} // namespace ApplicationInsights
} // namespace QtAws

#endif
