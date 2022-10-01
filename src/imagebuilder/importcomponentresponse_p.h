// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTCOMPONENTRESPONSE_P_H
#define QTAWS_IMPORTCOMPONENTRESPONSE_P_H

#include "imagebuilderresponse_p.h"

namespace QtAws {
namespace ImageBuilder {

class ImportComponentResponse;

class ImportComponentResponsePrivate : public ImageBuilderResponsePrivate {

public:

    explicit ImportComponentResponsePrivate(ImportComponentResponse * const q);

    void parseImportComponentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ImportComponentResponse)
    Q_DISABLE_COPY(ImportComponentResponsePrivate)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
