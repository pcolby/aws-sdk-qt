// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPARAMETERREQUEST_H
#define QTAWS_GETPARAMETERREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class GetParameterRequestPrivate;

class QTAWSSSM_EXPORT GetParameterRequest : public SsmRequest {

public:
    GetParameterRequest(const GetParameterRequest &other);
    GetParameterRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetParameterRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
