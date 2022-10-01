// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOLVERSREQUEST_H
#define QTAWS_LISTRESOLVERSREQUEST_H

#include "appsyncrequest.h"

namespace QtAws {
namespace AppSync {

class ListResolversRequestPrivate;

class QTAWSAPPSYNC_EXPORT ListResolversRequest : public AppSyncRequest {

public:
    ListResolversRequest(const ListResolversRequest &other);
    ListResolversRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListResolversRequest)

};

} // namespace AppSync
} // namespace QtAws

#endif
