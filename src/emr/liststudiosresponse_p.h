// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTUDIOSRESPONSE_P_H
#define QTAWS_LISTSTUDIOSRESPONSE_P_H

#include "emrresponse_p.h"

namespace QtAws {
namespace Emr {

class ListStudiosResponse;

class ListStudiosResponsePrivate : public EmrResponsePrivate {

public:

    explicit ListStudiosResponsePrivate(ListStudiosResponse * const q);

    void parseListStudiosResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListStudiosResponse)
    Q_DISABLE_COPY(ListStudiosResponsePrivate)

};

} // namespace Emr
} // namespace QtAws

#endif
