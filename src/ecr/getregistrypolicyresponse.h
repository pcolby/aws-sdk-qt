// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREGISTRYPOLICYRESPONSE_H
#define QTAWS_GETREGISTRYPOLICYRESPONSE_H

#include "ecrresponse.h"
#include "getregistrypolicyrequest.h"

namespace QtAws {
namespace Ecr {

class GetRegistryPolicyResponsePrivate;

class QTAWSECR_EXPORT GetRegistryPolicyResponse : public EcrResponse {
    Q_OBJECT

public:
    GetRegistryPolicyResponse(const GetRegistryPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetRegistryPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRegistryPolicyResponse)
    Q_DISABLE_COPY(GetRegistryPolicyResponse)

};

} // namespace Ecr
} // namespace QtAws

#endif
