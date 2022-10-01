// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MARKASARCHIVEDRESPONSE_P_H
#define QTAWS_MARKASARCHIVEDRESPONSE_P_H

#include "mgnresponse_p.h"

namespace QtAws {
namespace Mgn {

class MarkAsArchivedResponse;

class MarkAsArchivedResponsePrivate : public MgnResponsePrivate {

public:

    explicit MarkAsArchivedResponsePrivate(MarkAsArchivedResponse * const q);

    void parseMarkAsArchivedResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(MarkAsArchivedResponse)
    Q_DISABLE_COPY(MarkAsArchivedResponsePrivate)

};

} // namespace Mgn
} // namespace QtAws

#endif
