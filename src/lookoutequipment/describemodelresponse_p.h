// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMODELRESPONSE_P_H
#define QTAWS_DESCRIBEMODELRESPONSE_P_H

#include "lookoutequipmentresponse_p.h"

namespace QtAws {
namespace LookoutEquipment {

class DescribeModelResponse;

class DescribeModelResponsePrivate : public LookoutEquipmentResponsePrivate {

public:

    explicit DescribeModelResponsePrivate(DescribeModelResponse * const q);

    void parseDescribeModelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeModelResponse)
    Q_DISABLE_COPY(DescribeModelResponsePrivate)

};

} // namespace LookoutEquipment
} // namespace QtAws

#endif
