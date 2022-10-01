// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTPROJECTPOLICYRESPONSE_P_H
#define QTAWS_PUTPROJECTPOLICYRESPONSE_P_H

#include "rekognitionresponse_p.h"

namespace QtAws {
namespace Rekognition {

class PutProjectPolicyResponse;

class PutProjectPolicyResponsePrivate : public RekognitionResponsePrivate {

public:

    explicit PutProjectPolicyResponsePrivate(PutProjectPolicyResponse * const q);

    void parsePutProjectPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutProjectPolicyResponse)
    Q_DISABLE_COPY(PutProjectPolicyResponsePrivate)

};

} // namespace Rekognition
} // namespace QtAws

#endif
