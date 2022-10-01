// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERECOMMENDERCONFIGURATIONRESPONSE_H
#define QTAWS_DELETERECOMMENDERCONFIGURATIONRESPONSE_H

#include "pinpointresponse.h"
#include "deleterecommenderconfigurationrequest.h"

namespace QtAws {
namespace Pinpoint {

class DeleteRecommenderConfigurationResponsePrivate;

class QTAWSPINPOINT_EXPORT DeleteRecommenderConfigurationResponse : public PinpointResponse {
    Q_OBJECT

public:
    DeleteRecommenderConfigurationResponse(const DeleteRecommenderConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteRecommenderConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRecommenderConfigurationResponse)
    Q_DISABLE_COPY(DeleteRecommenderConfigurationResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
