// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTJOBRUNSREQUEST_H
#define QTAWS_LISTJOBRUNSREQUEST_H

#include "databrewrequest.h"

namespace QtAws {
namespace DataBrew {

class ListJobRunsRequestPrivate;

class QTAWSDATABREW_EXPORT ListJobRunsRequest : public DataBrewRequest {

public:
    ListJobRunsRequest(const ListJobRunsRequest &other);
    ListJobRunsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListJobRunsRequest)

};

} // namespace DataBrew
} // namespace QtAws

#endif
