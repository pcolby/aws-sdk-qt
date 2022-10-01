// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTJOBTEMPLATESRESPONSE_P_H
#define QTAWS_LISTJOBTEMPLATESRESPONSE_P_H

#include "mediaconvertresponse_p.h"

namespace QtAws {
namespace MediaConvert {

class ListJobTemplatesResponse;

class ListJobTemplatesResponsePrivate : public MediaConvertResponsePrivate {

public:

    explicit ListJobTemplatesResponsePrivate(ListJobTemplatesResponse * const q);

    void parseListJobTemplatesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListJobTemplatesResponse)
    Q_DISABLE_COPY(ListJobTemplatesResponsePrivate)

};

} // namespace MediaConvert
} // namespace QtAws

#endif
