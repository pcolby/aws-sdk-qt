// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELABELSRESPONSE_P_H
#define QTAWS_DELETELABELSRESPONSE_P_H

#include "workdocsresponse_p.h"

namespace QtAws {
namespace WorkDocs {

class DeleteLabelsResponse;

class DeleteLabelsResponsePrivate : public WorkDocsResponsePrivate {

public:

    explicit DeleteLabelsResponsePrivate(DeleteLabelsResponse * const q);

    void parseDeleteLabelsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteLabelsResponse)
    Q_DISABLE_COPY(DeleteLabelsResponsePrivate)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
