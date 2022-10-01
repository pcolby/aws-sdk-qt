// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEUSAGELIMITREQUEST_H
#define QTAWS_DELETEUSAGELIMITREQUEST_H

#include "redshiftserverlessrequest.h"

namespace QtAws {
namespace RedshiftServerless {

class DeleteUsageLimitRequestPrivate;

class QTAWSREDSHIFTSERVERLESS_EXPORT DeleteUsageLimitRequest : public RedshiftServerlessRequest {

public:
    DeleteUsageLimitRequest(const DeleteUsageLimitRequest &other);
    DeleteUsageLimitRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteUsageLimitRequest)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif
