// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRECOVERYPOINTREQUEST_H
#define QTAWS_GETRECOVERYPOINTREQUEST_H

#include "redshiftserverlessrequest.h"

namespace QtAws {
namespace RedshiftServerless {

class GetRecoveryPointRequestPrivate;

class QTAWSREDSHIFTSERVERLESS_EXPORT GetRecoveryPointRequest : public RedshiftServerlessRequest {

public:
    GetRecoveryPointRequest(const GetRecoveryPointRequest &other);
    GetRecoveryPointRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRecoveryPointRequest)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif
