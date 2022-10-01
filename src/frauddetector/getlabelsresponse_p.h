// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLABELSRESPONSE_P_H
#define QTAWS_GETLABELSRESPONSE_P_H

#include "frauddetectorresponse_p.h"

namespace QtAws {
namespace FraudDetector {

class GetLabelsResponse;

class GetLabelsResponsePrivate : public FraudDetectorResponsePrivate {

public:

    explicit GetLabelsResponsePrivate(GetLabelsResponse * const q);

    void parseGetLabelsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetLabelsResponse)
    Q_DISABLE_COPY(GetLabelsResponsePrivate)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
