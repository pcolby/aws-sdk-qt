// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELABELRESPONSE_P_H
#define QTAWS_DESCRIBELABELRESPONSE_P_H

#include "lookoutequipmentresponse_p.h"

namespace QtAws {
namespace LookoutEquipment {

class DescribeLabelResponse;

class DescribeLabelResponsePrivate : public LookoutEquipmentResponsePrivate {

public:

    explicit DescribeLabelResponsePrivate(DescribeLabelResponse * const q);

    void parseDescribeLabelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeLabelResponse)
    Q_DISABLE_COPY(DescribeLabelResponsePrivate)

};

} // namespace LookoutEquipment
} // namespace QtAws

#endif
