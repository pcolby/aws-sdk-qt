// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDATAREPOSITORYASSOCIATIONREQUEST_H
#define QTAWS_CREATEDATAREPOSITORYASSOCIATIONREQUEST_H

#include "fsxrequest.h"

namespace QtAws {
namespace FSx {

class CreateDataRepositoryAssociationRequestPrivate;

class QTAWSFSX_EXPORT CreateDataRepositoryAssociationRequest : public FSxRequest {

public:
    CreateDataRepositoryAssociationRequest(const CreateDataRepositoryAssociationRequest &other);
    CreateDataRepositoryAssociationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDataRepositoryAssociationRequest)

};

} // namespace FSx
} // namespace QtAws

#endif
