// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEALERTMANAGERDEFINITIONRESPONSE_P_H
#define QTAWS_DESCRIBEALERTMANAGERDEFINITIONRESPONSE_P_H

#include "ampresponse_p.h"

namespace QtAws {
namespace Amp {

class DescribeAlertManagerDefinitionResponse;

class DescribeAlertManagerDefinitionResponsePrivate : public AmpResponsePrivate {

public:

    explicit DescribeAlertManagerDefinitionResponsePrivate(DescribeAlertManagerDefinitionResponse * const q);

    void parseDescribeAlertManagerDefinitionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeAlertManagerDefinitionResponse)
    Q_DISABLE_COPY(DescribeAlertManagerDefinitionResponsePrivate)

};

} // namespace Amp
} // namespace QtAws

#endif
