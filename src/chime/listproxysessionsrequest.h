// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROXYSESSIONSREQUEST_H
#define QTAWS_LISTPROXYSESSIONSREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class ListProxySessionsRequestPrivate;

class QTAWSCHIME_EXPORT ListProxySessionsRequest : public ChimeRequest {

public:
    ListProxySessionsRequest(const ListProxySessionsRequest &other);
    ListProxySessionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListProxySessionsRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
