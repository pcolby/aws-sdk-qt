// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMODELRESPONSE_P_H
#define QTAWS_DESCRIBEMODELRESPONSE_P_H

#include "lookoutvisionresponse_p.h"

namespace QtAws {
namespace LookoutVision {

class DescribeModelResponse;

class DescribeModelResponsePrivate : public LookoutVisionResponsePrivate {

public:

    explicit DescribeModelResponsePrivate(DescribeModelResponse * const q);

    void parseDescribeModelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeModelResponse)
    Q_DISABLE_COPY(DescribeModelResponsePrivate)

};

} // namespace LookoutVision
} // namespace QtAws

#endif
