// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXPORTBUNDLERESPONSE_P_H
#define QTAWS_EXPORTBUNDLERESPONSE_P_H

#include "mobileresponse_p.h"

namespace QtAws {
namespace Mobile {

class ExportBundleResponse;

class ExportBundleResponsePrivate : public MobileResponsePrivate {

public:

    explicit ExportBundleResponsePrivate(ExportBundleResponse * const q);

    void parseExportBundleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ExportBundleResponse)
    Q_DISABLE_COPY(ExportBundleResponsePrivate)

};

} // namespace Mobile
} // namespace QtAws

#endif
