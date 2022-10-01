// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTORDERSREQUEST_H
#define QTAWS_LISTORDERSREQUEST_H

#include "outpostsrequest.h"

namespace QtAws {
namespace Outposts {

class ListOrdersRequestPrivate;

class QTAWSOUTPOSTS_EXPORT ListOrdersRequest : public OutpostsRequest {

public:
    ListOrdersRequest(const ListOrdersRequest &other);
    ListOrdersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListOrdersRequest)

};

} // namespace Outposts
} // namespace QtAws

#endif
