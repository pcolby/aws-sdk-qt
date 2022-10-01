// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTVMIMAGERESPONSE_P_H
#define QTAWS_IMPORTVMIMAGERESPONSE_P_H

#include "imagebuilderresponse_p.h"

namespace QtAws {
namespace ImageBuilder {

class ImportVmImageResponse;

class ImportVmImageResponsePrivate : public ImageBuilderResponsePrivate {

public:

    explicit ImportVmImageResponsePrivate(ImportVmImageResponse * const q);

    void parseImportVmImageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ImportVmImageResponse)
    Q_DISABLE_COPY(ImportVmImageResponsePrivate)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
