// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERETURNSHIPPINGLABELRESPONSE_P_H
#define QTAWS_CREATERETURNSHIPPINGLABELRESPONSE_P_H

#include "snowballresponse_p.h"

namespace QtAws {
namespace Snowball {

class CreateReturnShippingLabelResponse;

class CreateReturnShippingLabelResponsePrivate : public SnowballResponsePrivate {

public:

    explicit CreateReturnShippingLabelResponsePrivate(CreateReturnShippingLabelResponse * const q);

    void parseCreateReturnShippingLabelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateReturnShippingLabelResponse)
    Q_DISABLE_COPY(CreateReturnShippingLabelResponsePrivate)

};

} // namespace Snowball
} // namespace QtAws

#endif
