// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDATAREPOSITORYASSOCIATIONREQUEST_H
#define QTAWS_UPDATEDATAREPOSITORYASSOCIATIONREQUEST_H

#include "fsxrequest.h"

namespace QtAws {
namespace FSx {

class UpdateDataRepositoryAssociationRequestPrivate;

class QTAWSFSX_EXPORT UpdateDataRepositoryAssociationRequest : public FSxRequest {

public:
    UpdateDataRepositoryAssociationRequest(const UpdateDataRepositoryAssociationRequest &other);
    UpdateDataRepositoryAssociationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDataRepositoryAssociationRequest)

};

} // namespace FSx
} // namespace QtAws

#endif
