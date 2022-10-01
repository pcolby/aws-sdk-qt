// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFUNCTIONREQUEST_H
#define QTAWS_DELETEFUNCTIONREQUEST_H

#include "appsyncrequest.h"

namespace QtAws {
namespace AppSync {

class DeleteFunctionRequestPrivate;

class QTAWSAPPSYNC_EXPORT DeleteFunctionRequest : public AppSyncRequest {

public:
    DeleteFunctionRequest(const DeleteFunctionRequest &other);
    DeleteFunctionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteFunctionRequest)

};

} // namespace AppSync
} // namespace QtAws

#endif
