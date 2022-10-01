// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEXTENSIONRESPONSE_P_H
#define QTAWS_DELETEEXTENSIONRESPONSE_P_H

#include "appconfigresponse_p.h"

namespace QtAws {
namespace AppConfig {

class DeleteExtensionResponse;

class DeleteExtensionResponsePrivate : public AppConfigResponsePrivate {

public:

    explicit DeleteExtensionResponsePrivate(DeleteExtensionResponse * const q);

    void parseDeleteExtensionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteExtensionResponse)
    Q_DISABLE_COPY(DeleteExtensionResponsePrivate)

};

} // namespace AppConfig
} // namespace QtAws

#endif
