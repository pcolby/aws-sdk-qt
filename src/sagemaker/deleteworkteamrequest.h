// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEWORKTEAMREQUEST_H
#define QTAWS_DELETEWORKTEAMREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class DeleteWorkteamRequestPrivate;

class QTAWSSAGEMAKER_EXPORT DeleteWorkteamRequest : public SageMakerRequest {

public:
    DeleteWorkteamRequest(const DeleteWorkteamRequest &other);
    DeleteWorkteamRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteWorkteamRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
