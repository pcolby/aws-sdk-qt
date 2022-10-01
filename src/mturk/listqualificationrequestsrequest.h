// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTQUALIFICATIONREQUESTSREQUEST_H
#define QTAWS_LISTQUALIFICATIONREQUESTSREQUEST_H

#include "mturkrequest.h"

namespace QtAws {
namespace MTurk {

class ListQualificationRequestsRequestPrivate;

class QTAWSMTURK_EXPORT ListQualificationRequestsRequest : public MTurkRequest {

public:
    ListQualificationRequestsRequest(const ListQualificationRequestsRequest &other);
    ListQualificationRequestsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListQualificationRequestsRequest)

};

} // namespace MTurk
} // namespace QtAws

#endif
