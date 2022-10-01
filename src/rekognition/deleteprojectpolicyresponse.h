// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPROJECTPOLICYRESPONSE_H
#define QTAWS_DELETEPROJECTPOLICYRESPONSE_H

#include "rekognitionresponse.h"
#include "deleteprojectpolicyrequest.h"

namespace QtAws {
namespace Rekognition {

class DeleteProjectPolicyResponsePrivate;

class QTAWSREKOGNITION_EXPORT DeleteProjectPolicyResponse : public RekognitionResponse {
    Q_OBJECT

public:
    DeleteProjectPolicyResponse(const DeleteProjectPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteProjectPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteProjectPolicyResponse)
    Q_DISABLE_COPY(DeleteProjectPolicyResponse)

};

} // namespace Rekognition
} // namespace QtAws

#endif
