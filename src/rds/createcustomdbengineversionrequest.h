// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECUSTOMDBENGINEVERSIONREQUEST_H
#define QTAWS_CREATECUSTOMDBENGINEVERSIONREQUEST_H

#include "rdsrequest.h"

namespace QtAws {
namespace Rds {

class CreateCustomDBEngineVersionRequestPrivate;

class QTAWSRDS_EXPORT CreateCustomDBEngineVersionRequest : public RdsRequest {

public:
    CreateCustomDBEngineVersionRequest(const CreateCustomDBEngineVersionRequest &other);
    CreateCustomDBEngineVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateCustomDBEngineVersionRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
