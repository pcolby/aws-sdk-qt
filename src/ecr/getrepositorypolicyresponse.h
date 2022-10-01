// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREPOSITORYPOLICYRESPONSE_H
#define QTAWS_GETREPOSITORYPOLICYRESPONSE_H

#include "ecrresponse.h"
#include "getrepositorypolicyrequest.h"

namespace QtAws {
namespace Ecr {

class GetRepositoryPolicyResponsePrivate;

class QTAWSECR_EXPORT GetRepositoryPolicyResponse : public EcrResponse {
    Q_OBJECT

public:
    GetRepositoryPolicyResponse(const GetRepositoryPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetRepositoryPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRepositoryPolicyResponse)
    Q_DISABLE_COPY(GetRepositoryPolicyResponse)

};

} // namespace Ecr
} // namespace QtAws

#endif
