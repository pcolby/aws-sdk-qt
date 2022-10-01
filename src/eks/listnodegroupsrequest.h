// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTNODEGROUPSREQUEST_H
#define QTAWS_LISTNODEGROUPSREQUEST_H

#include "eksrequest.h"

namespace QtAws {
namespace Eks {

class ListNodegroupsRequestPrivate;

class QTAWSEKS_EXPORT ListNodegroupsRequest : public EksRequest {

public:
    ListNodegroupsRequest(const ListNodegroupsRequest &other);
    ListNodegroupsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListNodegroupsRequest)

};

} // namespace Eks
} // namespace QtAws

#endif
