// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPARAMETERSREQUEST_H
#define QTAWS_GETPARAMETERSREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class GetParametersRequestPrivate;

class QTAWSSSM_EXPORT GetParametersRequest : public SsmRequest {

public:
    GetParametersRequest(const GetParametersRequest &other);
    GetParametersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetParametersRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
