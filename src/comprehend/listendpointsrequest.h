// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTENDPOINTSREQUEST_H
#define QTAWS_LISTENDPOINTSREQUEST_H

#include "comprehendrequest.h"

namespace QtAws {
namespace Comprehend {

class ListEndpointsRequestPrivate;

class QTAWSCOMPREHEND_EXPORT ListEndpointsRequest : public ComprehendRequest {

public:
    ListEndpointsRequest(const ListEndpointsRequest &other);
    ListEndpointsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListEndpointsRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif
