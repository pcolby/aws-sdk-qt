// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPLICATIONSREQUEST_H
#define QTAWS_LISTAPPLICATIONSREQUEST_H

#include "emrserverlessrequest.h"

namespace QtAws {
namespace EmrServerless {

class ListApplicationsRequestPrivate;

class QTAWSEMRSERVERLESS_EXPORT ListApplicationsRequest : public EmrServerlessRequest {

public:
    ListApplicationsRequest(const ListApplicationsRequest &other);
    ListApplicationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListApplicationsRequest)

};

} // namespace EmrServerless
} // namespace QtAws

#endif
