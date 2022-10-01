// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETYPEREQUEST_H
#define QTAWS_UPDATETYPEREQUEST_H

#include "appsyncrequest.h"

namespace QtAws {
namespace AppSync {

class UpdateTypeRequestPrivate;

class QTAWSAPPSYNC_EXPORT UpdateTypeRequest : public AppSyncRequest {

public:
    UpdateTypeRequest(const UpdateTypeRequest &other);
    UpdateTypeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateTypeRequest)

};

} // namespace AppSync
} // namespace QtAws

#endif
