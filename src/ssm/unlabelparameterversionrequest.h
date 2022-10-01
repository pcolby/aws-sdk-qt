// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNLABELPARAMETERVERSIONREQUEST_H
#define QTAWS_UNLABELPARAMETERVERSIONREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class UnlabelParameterVersionRequestPrivate;

class QTAWSSSM_EXPORT UnlabelParameterVersionRequest : public SsmRequest {

public:
    UnlabelParameterVersionRequest(const UnlabelParameterVersionRequest &other);
    UnlabelParameterVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UnlabelParameterVersionRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
