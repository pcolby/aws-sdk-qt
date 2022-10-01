// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSITESREQUEST_H
#define QTAWS_LISTSITESREQUEST_H

#include "outpostsrequest.h"

namespace QtAws {
namespace Outposts {

class ListSitesRequestPrivate;

class QTAWSOUTPOSTS_EXPORT ListSitesRequest : public OutpostsRequest {

public:
    ListSitesRequest(const ListSitesRequest &other);
    ListSitesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSitesRequest)

};

} // namespace Outposts
} // namespace QtAws

#endif
