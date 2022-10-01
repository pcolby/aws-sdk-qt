// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTSCHEMACREATIONREQUEST_H
#define QTAWS_STARTSCHEMACREATIONREQUEST_H

#include "appsyncrequest.h"

namespace QtAws {
namespace AppSync {

class StartSchemaCreationRequestPrivate;

class QTAWSAPPSYNC_EXPORT StartSchemaCreationRequest : public AppSyncRequest {

public:
    StartSchemaCreationRequest(const StartSchemaCreationRequest &other);
    StartSchemaCreationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartSchemaCreationRequest)

};

} // namespace AppSync
} // namespace QtAws

#endif
