// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTJOBSREQUEST_H
#define QTAWS_LISTJOBSREQUEST_H

#include "databrewrequest.h"

namespace QtAws {
namespace DataBrew {

class ListJobsRequestPrivate;

class QTAWSDATABREW_EXPORT ListJobsRequest : public DataBrewRequest {

public:
    ListJobsRequest(const ListJobsRequest &other);
    ListJobsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListJobsRequest)

};

} // namespace DataBrew
} // namespace QtAws

#endif
