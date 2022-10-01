// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXECUTESQLREQUEST_H
#define QTAWS_EXECUTESQLREQUEST_H

#include "rdsdatarequest.h"

namespace QtAws {
namespace RdsData {

class ExecuteSqlRequestPrivate;

class QTAWSRDSDATA_EXPORT ExecuteSqlRequest : public RdsDataRequest {

public:
    ExecuteSqlRequest(const ExecuteSqlRequest &other);
    ExecuteSqlRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ExecuteSqlRequest)

};

} // namespace RdsData
} // namespace QtAws

#endif
