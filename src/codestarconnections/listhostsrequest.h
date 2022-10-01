// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTHOSTSREQUEST_H
#define QTAWS_LISTHOSTSREQUEST_H

#include "codestarconnectionsrequest.h"

namespace QtAws {
namespace CodeStarconnections {

class ListHostsRequestPrivate;

class QTAWSCODESTARCONNECTIONS_EXPORT ListHostsRequest : public CodeStarconnectionsRequest {

public:
    ListHostsRequest(const ListHostsRequest &other);
    ListHostsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListHostsRequest)

};

} // namespace CodeStarconnections
} // namespace QtAws

#endif
