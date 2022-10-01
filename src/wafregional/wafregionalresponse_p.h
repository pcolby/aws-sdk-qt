// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_WAFREGIONALRESPONSE_P_H
#define QTAWS_WAFREGIONALRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace WafRegional {

class WafRegionalResponse;

class WafRegionalResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit WafRegionalResponsePrivate(WafRegionalResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(WafRegionalResponse)
    Q_DISABLE_COPY(WafRegionalResponsePrivate)

};

} // namespace WafRegional
} // namespace QtAws

#endif
