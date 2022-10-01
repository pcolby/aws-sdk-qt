// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSCHEMACREATIONSTATUSREQUEST_H
#define QTAWS_GETSCHEMACREATIONSTATUSREQUEST_H

#include "appsyncrequest.h"

namespace QtAws {
namespace AppSync {

class GetSchemaCreationStatusRequestPrivate;

class QTAWSAPPSYNC_EXPORT GetSchemaCreationStatusRequest : public AppSyncRequest {

public:
    GetSchemaCreationStatusRequest(const GetSchemaCreationStatusRequest &other);
    GetSchemaCreationStatusRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSchemaCreationStatusRequest)

};

} // namespace AppSync
} // namespace QtAws

#endif
