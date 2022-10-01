// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEWORKTEAMREQUEST_H
#define QTAWS_UPDATEWORKTEAMREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class UpdateWorkteamRequestPrivate;

class QTAWSSAGEMAKER_EXPORT UpdateWorkteamRequest : public SageMakerRequest {

public:
    UpdateWorkteamRequest(const UpdateWorkteamRequest &other);
    UpdateWorkteamRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateWorkteamRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
