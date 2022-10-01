// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELABELSRESPONSE_P_H
#define QTAWS_CREATELABELSRESPONSE_P_H

#include "workdocsresponse_p.h"

namespace QtAws {
namespace WorkDocs {

class CreateLabelsResponse;

class CreateLabelsResponsePrivate : public WorkDocsResponsePrivate {

public:

    explicit CreateLabelsResponsePrivate(CreateLabelsResponse * const q);

    void parseCreateLabelsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateLabelsResponse)
    Q_DISABLE_COPY(CreateLabelsResponsePrivate)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
