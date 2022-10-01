// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESCHEDULEDQUERYREQUEST_H
#define QTAWS_CREATESCHEDULEDQUERYREQUEST_H

#include "timestreamqueryrequest.h"

namespace QtAws {
namespace TimestreamQuery {

class CreateScheduledQueryRequestPrivate;

class QTAWSTIMESTREAMQUERY_EXPORT CreateScheduledQueryRequest : public TimestreamQueryRequest {

public:
    CreateScheduledQueryRequest(const CreateScheduledQueryRequest &other);
    CreateScheduledQueryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateScheduledQueryRequest)

};

} // namespace TimestreamQuery
} // namespace QtAws

#endif
