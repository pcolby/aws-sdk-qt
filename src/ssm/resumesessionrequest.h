// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESUMESESSIONREQUEST_H
#define QTAWS_RESUMESESSIONREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class ResumeSessionRequestPrivate;

class QTAWSSSM_EXPORT ResumeSessionRequest : public SsmRequest {

public:
    ResumeSessionRequest(const ResumeSessionRequest &other);
    ResumeSessionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ResumeSessionRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
