// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERULEMETADATARESPONSE_P_H
#define QTAWS_UPDATERULEMETADATARESPONSE_P_H

#include "frauddetectorresponse_p.h"

namespace QtAws {
namespace FraudDetector {

class UpdateRuleMetadataResponse;

class UpdateRuleMetadataResponsePrivate : public FraudDetectorResponsePrivate {

public:

    explicit UpdateRuleMetadataResponsePrivate(UpdateRuleMetadataResponse * const q);

    void parseUpdateRuleMetadataResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateRuleMetadataResponse)
    Q_DISABLE_COPY(UpdateRuleMetadataResponsePrivate)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
