// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOMMANDINVOCATIONREQUEST_H
#define QTAWS_GETCOMMANDINVOCATIONREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class GetCommandInvocationRequestPrivate;

class QTAWSSSM_EXPORT GetCommandInvocationRequest : public SsmRequest {

public:
    GetCommandInvocationRequest(const GetCommandInvocationRequest &other);
    GetCommandInvocationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCommandInvocationRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
