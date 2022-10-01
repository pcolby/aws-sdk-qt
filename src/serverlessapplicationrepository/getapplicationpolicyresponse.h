// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPPLICATIONPOLICYRESPONSE_H
#define QTAWS_GETAPPLICATIONPOLICYRESPONSE_H

#include "serverlessapplicationrepositoryresponse.h"
#include "getapplicationpolicyrequest.h"

namespace QtAws {
namespace ServerlessApplicationRepository {

class GetApplicationPolicyResponsePrivate;

class QTAWSSERVERLESSAPPLICATIONREPOSITORY_EXPORT GetApplicationPolicyResponse : public ServerlessApplicationRepositoryResponse {
    Q_OBJECT

public:
    GetApplicationPolicyResponse(const GetApplicationPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetApplicationPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetApplicationPolicyResponse)
    Q_DISABLE_COPY(GetApplicationPolicyResponse)

};

} // namespace ServerlessApplicationRepository
} // namespace QtAws

#endif
