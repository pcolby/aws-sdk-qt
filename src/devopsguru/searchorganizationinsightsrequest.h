// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHORGANIZATIONINSIGHTSREQUEST_H
#define QTAWS_SEARCHORGANIZATIONINSIGHTSREQUEST_H

#include "devopsgururequest.h"

namespace QtAws {
namespace DevOpsGuru {

class SearchOrganizationInsightsRequestPrivate;

class QTAWSDEVOPSGURU_EXPORT SearchOrganizationInsightsRequest : public DevOpsGuruRequest {

public:
    SearchOrganizationInsightsRequest(const SearchOrganizationInsightsRequest &other);
    SearchOrganizationInsightsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SearchOrganizationInsightsRequest)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
