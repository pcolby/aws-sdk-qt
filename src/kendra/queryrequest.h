// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_QUERYREQUEST_H
#define QTAWS_QUERYREQUEST_H

#include "kendrarequest.h"

namespace QtAws {
namespace Kendra {

class QueryRequestPrivate;

class QTAWSKENDRA_EXPORT QueryRequest : public KendraRequest {

public:
    QueryRequest(const QueryRequest &other);
    QueryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(QueryRequest)

};

} // namespace Kendra
} // namespace QtAws

#endif
