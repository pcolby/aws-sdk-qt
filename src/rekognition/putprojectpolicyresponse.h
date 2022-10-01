// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTPROJECTPOLICYRESPONSE_H
#define QTAWS_PUTPROJECTPOLICYRESPONSE_H

#include "rekognitionresponse.h"
#include "putprojectpolicyrequest.h"

namespace QtAws {
namespace Rekognition {

class PutProjectPolicyResponsePrivate;

class QTAWSREKOGNITION_EXPORT PutProjectPolicyResponse : public RekognitionResponse {
    Q_OBJECT

public:
    PutProjectPolicyResponse(const PutProjectPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutProjectPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutProjectPolicyResponse)
    Q_DISABLE_COPY(PutProjectPolicyResponse)

};

} // namespace Rekognition
} // namespace QtAws

#endif
