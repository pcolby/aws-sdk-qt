// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERECOMMENDERCONFIGURATIONRESPONSE_H
#define QTAWS_CREATERECOMMENDERCONFIGURATIONRESPONSE_H

#include "pinpointresponse.h"
#include "createrecommenderconfigurationrequest.h"

namespace QtAws {
namespace Pinpoint {

class CreateRecommenderConfigurationResponsePrivate;

class QTAWSPINPOINT_EXPORT CreateRecommenderConfigurationResponse : public PinpointResponse {
    Q_OBJECT

public:
    CreateRecommenderConfigurationResponse(const CreateRecommenderConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateRecommenderConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateRecommenderConfigurationResponse)
    Q_DISABLE_COPY(CreateRecommenderConfigurationResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
