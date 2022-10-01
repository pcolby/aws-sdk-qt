// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COPYOPTIONGROUPREQUEST_H
#define QTAWS_COPYOPTIONGROUPREQUEST_H

#include "rdsrequest.h"

namespace QtAws {
namespace Rds {

class CopyOptionGroupRequestPrivate;

class QTAWSRDS_EXPORT CopyOptionGroupRequest : public RdsRequest {

public:
    CopyOptionGroupRequest(const CopyOptionGroupRequest &other);
    CopyOptionGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CopyOptionGroupRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
