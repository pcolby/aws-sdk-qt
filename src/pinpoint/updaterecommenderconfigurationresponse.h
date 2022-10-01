// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERECOMMENDERCONFIGURATIONRESPONSE_H
#define QTAWS_UPDATERECOMMENDERCONFIGURATIONRESPONSE_H

#include "pinpointresponse.h"
#include "updaterecommenderconfigurationrequest.h"

namespace QtAws {
namespace Pinpoint {

class UpdateRecommenderConfigurationResponsePrivate;

class QTAWSPINPOINT_EXPORT UpdateRecommenderConfigurationResponse : public PinpointResponse {
    Q_OBJECT

public:
    UpdateRecommenderConfigurationResponse(const UpdateRecommenderConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateRecommenderConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateRecommenderConfigurationResponse)
    Q_DISABLE_COPY(UpdateRecommenderConfigurationResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
