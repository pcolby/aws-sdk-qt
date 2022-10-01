// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEWORLDTEMPLATERESPONSE_P_H
#define QTAWS_DESCRIBEWORLDTEMPLATERESPONSE_P_H

#include "robomakerresponse_p.h"

namespace QtAws {
namespace RoboMaker {

class DescribeWorldTemplateResponse;

class DescribeWorldTemplateResponsePrivate : public RoboMakerResponsePrivate {

public:

    explicit DescribeWorldTemplateResponsePrivate(DescribeWorldTemplateResponse * const q);

    void parseDescribeWorldTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeWorldTemplateResponse)
    Q_DISABLE_COPY(DescribeWorldTemplateResponsePrivate)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
