// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PREPAREQUERYREQUEST_H
#define QTAWS_PREPAREQUERYREQUEST_H

#include "timestreamqueryrequest.h"

namespace QtAws {
namespace TimestreamQuery {

class PrepareQueryRequestPrivate;

class QTAWSTIMESTREAMQUERY_EXPORT PrepareQueryRequest : public TimestreamQueryRequest {

public:
    PrepareQueryRequest(const PrepareQueryRequest &other);
    PrepareQueryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PrepareQueryRequest)

};

} // namespace TimestreamQuery
} // namespace QtAws

#endif
