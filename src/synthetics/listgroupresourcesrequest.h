// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGROUPRESOURCESREQUEST_H
#define QTAWS_LISTGROUPRESOURCESREQUEST_H

#include "syntheticsrequest.h"

namespace QtAws {
namespace Synthetics {

class ListGroupResourcesRequestPrivate;

class QTAWSSYNTHETICS_EXPORT ListGroupResourcesRequest : public SyntheticsRequest {

public:
    ListGroupResourcesRequest(const ListGroupResourcesRequest &other);
    ListGroupResourcesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListGroupResourcesRequest)

};

} // namespace Synthetics
} // namespace QtAws

#endif
