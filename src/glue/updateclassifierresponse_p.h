// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECLASSIFIERRESPONSE_P_H
#define QTAWS_UPDATECLASSIFIERRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class UpdateClassifierResponse;

class UpdateClassifierResponsePrivate : public GlueResponsePrivate {

public:

    explicit UpdateClassifierResponsePrivate(UpdateClassifierResponse * const q);

    void parseUpdateClassifierResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateClassifierResponse)
    Q_DISABLE_COPY(UpdateClassifierResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
