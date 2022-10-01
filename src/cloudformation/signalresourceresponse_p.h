// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SIGNALRESOURCERESPONSE_P_H
#define QTAWS_SIGNALRESOURCERESPONSE_P_H

#include "cloudformationresponse_p.h"

namespace QtAws {
namespace CloudFormation {

class SignalResourceResponse;

class SignalResourceResponsePrivate : public CloudFormationResponsePrivate {

public:

    explicit SignalResourceResponsePrivate(SignalResourceResponse * const q);

    void parseSignalResourceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SignalResourceResponse)
    Q_DISABLE_COPY(SignalResourceResponsePrivate)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
