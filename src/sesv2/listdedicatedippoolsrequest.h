// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDEDICATEDIPPOOLSREQUEST_H
#define QTAWS_LISTDEDICATEDIPPOOLSREQUEST_H

#include "sesv2request.h"

namespace QtAws {
namespace SESv2 {

class ListDedicatedIpPoolsRequestPrivate;

class QTAWSSESV2_EXPORT ListDedicatedIpPoolsRequest : public SESv2Request {

public:
    ListDedicatedIpPoolsRequest(const ListDedicatedIpPoolsRequest &other);
    ListDedicatedIpPoolsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDedicatedIpPoolsRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
