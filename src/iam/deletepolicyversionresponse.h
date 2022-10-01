// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPOLICYVERSIONRESPONSE_H
#define QTAWS_DELETEPOLICYVERSIONRESPONSE_H

#include "iamresponse.h"
#include "deletepolicyversionrequest.h"

namespace QtAws {
namespace Iam {

class DeletePolicyVersionResponsePrivate;

class QTAWSIAM_EXPORT DeletePolicyVersionResponse : public IamResponse {
    Q_OBJECT

public:
    DeletePolicyVersionResponse(const DeletePolicyVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeletePolicyVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeletePolicyVersionResponse)
    Q_DISABLE_COPY(DeletePolicyVersionResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
