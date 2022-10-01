// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPPLICATIONPOLICYRESPONSE_P_H
#define QTAWS_GETAPPLICATIONPOLICYRESPONSE_P_H

#include "serverlessapplicationrepositoryresponse_p.h"

namespace QtAws {
namespace ServerlessApplicationRepository {

class GetApplicationPolicyResponse;

class GetApplicationPolicyResponsePrivate : public ServerlessApplicationRepositoryResponsePrivate {

public:

    explicit GetApplicationPolicyResponsePrivate(GetApplicationPolicyResponse * const q);

    void parseGetApplicationPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetApplicationPolicyResponse)
    Q_DISABLE_COPY(GetApplicationPolicyResponsePrivate)

};

} // namespace ServerlessApplicationRepository
} // namespace QtAws

#endif
