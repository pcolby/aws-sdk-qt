// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPRESETSRESPONSE_P_H
#define QTAWS_LISTPRESETSRESPONSE_P_H

#include "mediaconvertresponse_p.h"

namespace QtAws {
namespace MediaConvert {

class ListPresetsResponse;

class ListPresetsResponsePrivate : public MediaConvertResponsePrivate {

public:

    explicit ListPresetsResponsePrivate(ListPresetsResponse * const q);

    void parseListPresetsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListPresetsResponse)
    Q_DISABLE_COPY(ListPresetsResponsePrivate)

};

} // namespace MediaConvert
} // namespace QtAws

#endif
