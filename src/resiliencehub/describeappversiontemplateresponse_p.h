// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAPPVERSIONTEMPLATERESPONSE_P_H
#define QTAWS_DESCRIBEAPPVERSIONTEMPLATERESPONSE_P_H

#include "resiliencehubresponse_p.h"

namespace QtAws {
namespace ResilienceHub {

class DescribeAppVersionTemplateResponse;

class DescribeAppVersionTemplateResponsePrivate : public ResilienceHubResponsePrivate {

public:

    explicit DescribeAppVersionTemplateResponsePrivate(DescribeAppVersionTemplateResponse * const q);

    void parseDescribeAppVersionTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeAppVersionTemplateResponse)
    Q_DISABLE_COPY(DescribeAppVersionTemplateResponsePrivate)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
