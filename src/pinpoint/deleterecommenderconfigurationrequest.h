// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERECOMMENDERCONFIGURATIONREQUEST_H
#define QTAWS_DELETERECOMMENDERCONFIGURATIONREQUEST_H

#include "pinpointrequest.h"

namespace QtAws {
namespace Pinpoint {

class DeleteRecommenderConfigurationRequestPrivate;

class QTAWSPINPOINT_EXPORT DeleteRecommenderConfigurationRequest : public PinpointRequest {

public:
    DeleteRecommenderConfigurationRequest(const DeleteRecommenderConfigurationRequest &other);
    DeleteRecommenderConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRecommenderConfigurationRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
