// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTREGISTRYPOLICYRESPONSE_H
#define QTAWS_PUTREGISTRYPOLICYRESPONSE_H

#include "ecrresponse.h"
#include "putregistrypolicyrequest.h"

namespace QtAws {
namespace Ecr {

class PutRegistryPolicyResponsePrivate;

class QTAWSECR_EXPORT PutRegistryPolicyResponse : public EcrResponse {
    Q_OBJECT

public:
    PutRegistryPolicyResponse(const PutRegistryPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutRegistryPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutRegistryPolicyResponse)
    Q_DISABLE_COPY(PutRegistryPolicyResponse)

};

} // namespace Ecr
} // namespace QtAws

#endif
