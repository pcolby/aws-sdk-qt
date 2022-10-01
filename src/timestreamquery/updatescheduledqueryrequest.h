// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESCHEDULEDQUERYREQUEST_H
#define QTAWS_UPDATESCHEDULEDQUERYREQUEST_H

#include "timestreamqueryrequest.h"

namespace QtAws {
namespace TimestreamQuery {

class UpdateScheduledQueryRequestPrivate;

class QTAWSTIMESTREAMQUERY_EXPORT UpdateScheduledQueryRequest : public TimestreamQueryRequest {

public:
    UpdateScheduledQueryRequest(const UpdateScheduledQueryRequest &other);
    UpdateScheduledQueryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateScheduledQueryRequest)

};

} // namespace TimestreamQuery
} // namespace QtAws

#endif
