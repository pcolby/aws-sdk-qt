// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETYPEREQUEST_H
#define QTAWS_DELETETYPEREQUEST_H

#include "appsyncrequest.h"

namespace QtAws {
namespace AppSync {

class DeleteTypeRequestPrivate;

class QTAWSAPPSYNC_EXPORT DeleteTypeRequest : public AppSyncRequest {

public:
    DeleteTypeRequest(const DeleteTypeRequest &other);
    DeleteTypeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteTypeRequest)

};

} // namespace AppSync
} // namespace QtAws

#endif
