// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRECOMMENDERCONFIGURATIONRESPONSE_H
#define QTAWS_GETRECOMMENDERCONFIGURATIONRESPONSE_H

#include "pinpointresponse.h"
#include "getrecommenderconfigurationrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetRecommenderConfigurationResponsePrivate;

class QTAWSPINPOINT_EXPORT GetRecommenderConfigurationResponse : public PinpointResponse {
    Q_OBJECT

public:
    GetRecommenderConfigurationResponse(const GetRecommenderConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetRecommenderConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRecommenderConfigurationResponse)
    Q_DISABLE_COPY(GetRecommenderConfigurationResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
