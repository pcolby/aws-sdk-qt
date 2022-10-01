// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPVERSIONSREQUEST_H
#define QTAWS_LISTAPPVERSIONSREQUEST_H

#include "resiliencehubrequest.h"

namespace QtAws {
namespace ResilienceHub {

class ListAppVersionsRequestPrivate;

class QTAWSRESILIENCEHUB_EXPORT ListAppVersionsRequest : public ResilienceHubRequest {

public:
    ListAppVersionsRequest(const ListAppVersionsRequest &other);
    ListAppVersionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAppVersionsRequest)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
