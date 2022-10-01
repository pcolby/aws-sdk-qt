// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREPOSITORYPOLICYRESPONSE_H
#define QTAWS_GETREPOSITORYPOLICYRESPONSE_H

#include "ecrpublicresponse.h"
#include "getrepositorypolicyrequest.h"

namespace QtAws {
namespace EcrPublic {

class GetRepositoryPolicyResponsePrivate;

class QTAWSECRPUBLIC_EXPORT GetRepositoryPolicyResponse : public EcrPublicResponse {
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

} // namespace EcrPublic
} // namespace QtAws

#endif
