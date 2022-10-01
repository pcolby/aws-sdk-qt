// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEJOBTEMPLATERESPONSE_P_H
#define QTAWS_UPDATEJOBTEMPLATERESPONSE_P_H

#include "mediaconvertresponse_p.h"

namespace QtAws {
namespace MediaConvert {

class UpdateJobTemplateResponse;

class UpdateJobTemplateResponsePrivate : public MediaConvertResponsePrivate {

public:

    explicit UpdateJobTemplateResponsePrivate(UpdateJobTemplateResponse * const q);

    void parseUpdateJobTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateJobTemplateResponse)
    Q_DISABLE_COPY(UpdateJobTemplateResponsePrivate)

};

} // namespace MediaConvert
} // namespace QtAws

#endif
