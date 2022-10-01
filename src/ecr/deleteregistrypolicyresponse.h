// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREGISTRYPOLICYRESPONSE_H
#define QTAWS_DELETEREGISTRYPOLICYRESPONSE_H

#include "ecrresponse.h"
#include "deleteregistrypolicyrequest.h"

namespace QtAws {
namespace Ecr {

class DeleteRegistryPolicyResponsePrivate;

class QTAWSECR_EXPORT DeleteRegistryPolicyResponse : public EcrResponse {
    Q_OBJECT

public:
    DeleteRegistryPolicyResponse(const DeleteRegistryPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteRegistryPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRegistryPolicyResponse)
    Q_DISABLE_COPY(DeleteRegistryPolicyResponse)

};

} // namespace Ecr
} // namespace QtAws

#endif
