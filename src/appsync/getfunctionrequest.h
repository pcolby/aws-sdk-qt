// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFUNCTIONREQUEST_H
#define QTAWS_GETFUNCTIONREQUEST_H

#include "appsyncrequest.h"

namespace QtAws {
namespace AppSync {

class GetFunctionRequestPrivate;

class QTAWSAPPSYNC_EXPORT GetFunctionRequest : public AppSyncRequest {

public:
    GetFunctionRequest(const GetFunctionRequest &other);
    GetFunctionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetFunctionRequest)

};

} // namespace AppSync
} // namespace QtAws

#endif
