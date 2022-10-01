// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECUSTOMDBENGINEVERSIONREQUEST_H
#define QTAWS_DELETECUSTOMDBENGINEVERSIONREQUEST_H

#include "rdsrequest.h"

namespace QtAws {
namespace Rds {

class DeleteCustomDBEngineVersionRequestPrivate;

class QTAWSRDS_EXPORT DeleteCustomDBEngineVersionRequest : public RdsRequest {

public:
    DeleteCustomDBEngineVersionRequest(const DeleteCustomDBEngineVersionRequest &other);
    DeleteCustomDBEngineVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteCustomDBEngineVersionRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
