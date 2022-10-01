// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPROJECTPOLICYRESPONSE_P_H
#define QTAWS_DELETEPROJECTPOLICYRESPONSE_P_H

#include "rekognitionresponse_p.h"

namespace QtAws {
namespace Rekognition {

class DeleteProjectPolicyResponse;

class DeleteProjectPolicyResponsePrivate : public RekognitionResponsePrivate {

public:

    explicit DeleteProjectPolicyResponsePrivate(DeleteProjectPolicyResponse * const q);

    void parseDeleteProjectPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteProjectPolicyResponse)
    Q_DISABLE_COPY(DeleteProjectPolicyResponsePrivate)

};

} // namespace Rekognition
} // namespace QtAws

#endif
