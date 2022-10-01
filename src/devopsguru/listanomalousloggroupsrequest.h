// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTANOMALOUSLOGGROUPSREQUEST_H
#define QTAWS_LISTANOMALOUSLOGGROUPSREQUEST_H

#include "devopsgururequest.h"

namespace QtAws {
namespace DevOpsGuru {

class ListAnomalousLogGroupsRequestPrivate;

class QTAWSDEVOPSGURU_EXPORT ListAnomalousLogGroupsRequest : public DevOpsGuruRequest {

public:
    ListAnomalousLogGroupsRequest(const ListAnomalousLogGroupsRequest &other);
    ListAnomalousLogGroupsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAnomalousLogGroupsRequest)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
