// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMANAGEDJOBTEMPLATERESPONSE_P_H
#define QTAWS_DESCRIBEMANAGEDJOBTEMPLATERESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class DescribeManagedJobTemplateResponse;

class DescribeManagedJobTemplateResponsePrivate : public IoTResponsePrivate {

public:

    explicit DescribeManagedJobTemplateResponsePrivate(DescribeManagedJobTemplateResponse * const q);

    void parseDescribeManagedJobTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeManagedJobTemplateResponse)
    Q_DISABLE_COPY(DescribeManagedJobTemplateResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
