// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETREPOSITORYPOLICYRESPONSE_H
#define QTAWS_SETREPOSITORYPOLICYRESPONSE_H

#include "ecrpublicresponse.h"
#include "setrepositorypolicyrequest.h"

namespace QtAws {
namespace EcrPublic {

class SetRepositoryPolicyResponsePrivate;

class QTAWSECRPUBLIC_EXPORT SetRepositoryPolicyResponse : public EcrPublicResponse {
    Q_OBJECT

public:
    SetRepositoryPolicyResponse(const SetRepositoryPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SetRepositoryPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetRepositoryPolicyResponse)
    Q_DISABLE_COPY(SetRepositoryPolicyResponse)

};

} // namespace EcrPublic
} // namespace QtAws

#endif
