// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPARAMETERSBYPATHREQUEST_H
#define QTAWS_GETPARAMETERSBYPATHREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class GetParametersByPathRequestPrivate;

class QTAWSSSM_EXPORT GetParametersByPathRequest : public SsmRequest {

public:
    GetParametersByPathRequest(const GetParametersByPathRequest &other);
    GetParametersByPathRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetParametersByPathRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
