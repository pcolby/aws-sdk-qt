// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDATAREPOSITORYASSOCIATIONREQUEST_H
#define QTAWS_DELETEDATAREPOSITORYASSOCIATIONREQUEST_H

#include "fsxrequest.h"

namespace QtAws {
namespace FSx {

class DeleteDataRepositoryAssociationRequestPrivate;

class QTAWSFSX_EXPORT DeleteDataRepositoryAssociationRequest : public FSxRequest {

public:
    DeleteDataRepositoryAssociationRequest(const DeleteDataRepositoryAssociationRequest &other);
    DeleteDataRepositoryAssociationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDataRepositoryAssociationRequest)

};

} // namespace FSx
} // namespace QtAws

#endif
