// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETYPEREQUEST_H
#define QTAWS_CREATETYPEREQUEST_H

#include "appsyncrequest.h"

namespace QtAws {
namespace AppSync {

class CreateTypeRequestPrivate;

class QTAWSAPPSYNC_EXPORT CreateTypeRequest : public AppSyncRequest {

public:
    CreateTypeRequest(const CreateTypeRequest &other);
    CreateTypeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateTypeRequest)

};

} // namespace AppSync
} // namespace QtAws

#endif
