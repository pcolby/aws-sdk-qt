// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYCUSTOMDBENGINEVERSIONREQUEST_H
#define QTAWS_MODIFYCUSTOMDBENGINEVERSIONREQUEST_H

#include "rdsrequest.h"

namespace QtAws {
namespace Rds {

class ModifyCustomDBEngineVersionRequestPrivate;

class QTAWSRDS_EXPORT ModifyCustomDBEngineVersionRequest : public RdsRequest {

public:
    ModifyCustomDBEngineVersionRequest(const ModifyCustomDBEngineVersionRequest &other);
    ModifyCustomDBEngineVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyCustomDBEngineVersionRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
