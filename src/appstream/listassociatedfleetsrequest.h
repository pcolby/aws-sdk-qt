// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTASSOCIATEDFLEETSREQUEST_H
#define QTAWS_LISTASSOCIATEDFLEETSREQUEST_H

#include "appstreamrequest.h"

namespace QtAws {
namespace AppStream {

class ListAssociatedFleetsRequestPrivate;

class QTAWSAPPSTREAM_EXPORT ListAssociatedFleetsRequest : public AppStreamRequest {

public:
    ListAssociatedFleetsRequest(const ListAssociatedFleetsRequest &other);
    ListAssociatedFleetsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAssociatedFleetsRequest)

};

} // namespace AppStream
} // namespace QtAws

#endif
