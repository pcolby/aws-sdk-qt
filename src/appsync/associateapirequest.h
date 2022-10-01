// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEAPIREQUEST_H
#define QTAWS_ASSOCIATEAPIREQUEST_H

#include "appsyncrequest.h"

namespace QtAws {
namespace AppSync {

class AssociateApiRequestPrivate;

class QTAWSAPPSYNC_EXPORT AssociateApiRequest : public AppSyncRequest {

public:
    AssociateApiRequest(const AssociateApiRequest &other);
    AssociateApiRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateApiRequest)

};

} // namespace AppSync
} // namespace QtAws

#endif
