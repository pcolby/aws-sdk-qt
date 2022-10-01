// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETJOBTEMPLATERESPONSE_P_H
#define QTAWS_GETJOBTEMPLATERESPONSE_P_H

#include "mediaconvertresponse_p.h"

namespace QtAws {
namespace MediaConvert {

class GetJobTemplateResponse;

class GetJobTemplateResponsePrivate : public MediaConvertResponsePrivate {

public:

    explicit GetJobTemplateResponsePrivate(GetJobTemplateResponse * const q);

    void parseGetJobTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetJobTemplateResponse)
    Q_DISABLE_COPY(GetJobTemplateResponsePrivate)

};

} // namespace MediaConvert
} // namespace QtAws

#endif
