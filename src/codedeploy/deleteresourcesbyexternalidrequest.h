// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERESOURCESBYEXTERNALIDREQUEST_H
#define QTAWS_DELETERESOURCESBYEXTERNALIDREQUEST_H

#include "codedeployrequest.h"

namespace QtAws {
namespace CodeDeploy {

class DeleteResourcesByExternalIdRequestPrivate;

class QTAWSCODEDEPLOY_EXPORT DeleteResourcesByExternalIdRequest : public CodeDeployRequest {

public:
    DeleteResourcesByExternalIdRequest(const DeleteResourcesByExternalIdRequest &other);
    DeleteResourcesByExternalIdRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteResourcesByExternalIdRequest)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
