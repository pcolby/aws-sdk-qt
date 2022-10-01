// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTAPPLICATIONPOLICYRESPONSE_H
#define QTAWS_PUTAPPLICATIONPOLICYRESPONSE_H

#include "serverlessapplicationrepositoryresponse.h"
#include "putapplicationpolicyrequest.h"

namespace QtAws {
namespace ServerlessApplicationRepository {

class PutApplicationPolicyResponsePrivate;

class QTAWSSERVERLESSAPPLICATIONREPOSITORY_EXPORT PutApplicationPolicyResponse : public ServerlessApplicationRepositoryResponse {
    Q_OBJECT

public:
    PutApplicationPolicyResponse(const PutApplicationPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutApplicationPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutApplicationPolicyResponse)
    Q_DISABLE_COPY(PutApplicationPolicyResponse)

};

} // namespace ServerlessApplicationRepository
} // namespace QtAws

#endif
