// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXPORTPROJECTRESPONSE_P_H
#define QTAWS_EXPORTPROJECTRESPONSE_P_H

#include "mobileresponse_p.h"

namespace QtAws {
namespace Mobile {

class ExportProjectResponse;

class ExportProjectResponsePrivate : public MobileResponsePrivate {

public:

    explicit ExportProjectResponsePrivate(ExportProjectResponse * const q);

    void parseExportProjectResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ExportProjectResponse)
    Q_DISABLE_COPY(ExportProjectResponsePrivate)

};

} // namespace Mobile
} // namespace QtAws

#endif
