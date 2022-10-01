// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTAPPLICATIONPOLICYRESPONSE_P_H
#define QTAWS_PUTAPPLICATIONPOLICYRESPONSE_P_H

#include "serverlessapplicationrepositoryresponse_p.h"

namespace QtAws {
namespace ServerlessApplicationRepository {

class PutApplicationPolicyResponse;

class PutApplicationPolicyResponsePrivate : public ServerlessApplicationRepositoryResponsePrivate {

public:

    explicit PutApplicationPolicyResponsePrivate(PutApplicationPolicyResponse * const q);

    void parsePutApplicationPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutApplicationPolicyResponse)
    Q_DISABLE_COPY(PutApplicationPolicyResponsePrivate)

};

} // namespace ServerlessApplicationRepository
} // namespace QtAws

#endif
