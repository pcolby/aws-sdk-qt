// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROJECTPOLICIESRESPONSE_P_H
#define QTAWS_LISTPROJECTPOLICIESRESPONSE_P_H

#include "rekognitionresponse_p.h"

namespace QtAws {
namespace Rekognition {

class ListProjectPoliciesResponse;

class ListProjectPoliciesResponsePrivate : public RekognitionResponsePrivate {

public:

    explicit ListProjectPoliciesResponsePrivate(ListProjectPoliciesResponse * const q);

    void parseListProjectPoliciesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListProjectPoliciesResponse)
    Q_DISABLE_COPY(ListProjectPoliciesResponsePrivate)

};

} // namespace Rekognition
} // namespace QtAws

#endif
