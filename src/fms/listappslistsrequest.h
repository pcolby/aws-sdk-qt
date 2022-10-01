// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPSLISTSREQUEST_H
#define QTAWS_LISTAPPSLISTSREQUEST_H

#include "fmsrequest.h"

namespace QtAws {
namespace Fms {

class ListAppsListsRequestPrivate;

class QTAWSFMS_EXPORT ListAppsListsRequest : public FmsRequest {

public:
    ListAppsListsRequest(const ListAppsListsRequest &other);
    ListAppsListsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAppsListsRequest)

};

} // namespace Fms
} // namespace QtAws

#endif
