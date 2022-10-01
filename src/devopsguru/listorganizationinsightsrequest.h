// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTORGANIZATIONINSIGHTSREQUEST_H
#define QTAWS_LISTORGANIZATIONINSIGHTSREQUEST_H

#include "devopsgururequest.h"

namespace QtAws {
namespace DevOpsGuru {

class ListOrganizationInsightsRequestPrivate;

class QTAWSDEVOPSGURU_EXPORT ListOrganizationInsightsRequest : public DevOpsGuruRequest {

public:
    ListOrganizationInsightsRequest(const ListOrganizationInsightsRequest &other);
    ListOrganizationInsightsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListOrganizationInsightsRequest)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
