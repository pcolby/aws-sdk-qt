// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESCHEDULEDQUERYREQUEST_H
#define QTAWS_DELETESCHEDULEDQUERYREQUEST_H

#include "timestreamqueryrequest.h"

namespace QtAws {
namespace TimestreamQuery {

class DeleteScheduledQueryRequestPrivate;

class QTAWSTIMESTREAMQUERY_EXPORT DeleteScheduledQueryRequest : public TimestreamQueryRequest {

public:
    DeleteScheduledQueryRequest(const DeleteScheduledQueryRequest &other);
    DeleteScheduledQueryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteScheduledQueryRequest)

};

} // namespace TimestreamQuery
} // namespace QtAws

#endif
