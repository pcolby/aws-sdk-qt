// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TERMINATESESSIONREQUEST_H
#define QTAWS_TERMINATESESSIONREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class TerminateSessionRequestPrivate;

class QTAWSSSM_EXPORT TerminateSessionRequest : public SsmRequest {

public:
    TerminateSessionRequest(const TerminateSessionRequest &other);
    TerminateSessionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TerminateSessionRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
