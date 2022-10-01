// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFINDINGAGGREGATORSREQUEST_H
#define QTAWS_LISTFINDINGAGGREGATORSREQUEST_H

#include "securityhubrequest.h"

namespace QtAws {
namespace SecurityHub {

class ListFindingAggregatorsRequestPrivate;

class QTAWSSECURITYHUB_EXPORT ListFindingAggregatorsRequest : public SecurityHubRequest {

public:
    ListFindingAggregatorsRequest(const ListFindingAggregatorsRequest &other);
    ListFindingAggregatorsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListFindingAggregatorsRequest)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
