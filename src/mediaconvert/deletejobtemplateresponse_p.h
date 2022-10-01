// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEJOBTEMPLATERESPONSE_P_H
#define QTAWS_DELETEJOBTEMPLATERESPONSE_P_H

#include "mediaconvertresponse_p.h"

namespace QtAws {
namespace MediaConvert {

class DeleteJobTemplateResponse;

class DeleteJobTemplateResponsePrivate : public MediaConvertResponsePrivate {

public:

    explicit DeleteJobTemplateResponsePrivate(DeleteJobTemplateResponse * const q);

    void parseDeleteJobTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteJobTemplateResponse)
    Q_DISABLE_COPY(DeleteJobTemplateResponsePrivate)

};

} // namespace MediaConvert
} // namespace QtAws

#endif
