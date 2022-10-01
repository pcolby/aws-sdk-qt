// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPLICATIONREQUEST_H
#define QTAWS_DELETEAPPLICATIONREQUEST_H

#include "serverlessapplicationrepositoryrequest.h"

namespace QtAws {
namespace ServerlessApplicationRepository {

class DeleteApplicationRequestPrivate;

class QTAWSSERVERLESSAPPLICATIONREPOSITORY_EXPORT DeleteApplicationRequest : public ServerlessApplicationRepositoryRequest {

public:
    DeleteApplicationRequest(const DeleteApplicationRequest &other);
    DeleteApplicationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteApplicationRequest)

};

} // namespace ServerlessApplicationRepository
} // namespace QtAws

#endif
