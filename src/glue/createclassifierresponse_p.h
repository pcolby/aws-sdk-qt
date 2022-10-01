// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECLASSIFIERRESPONSE_P_H
#define QTAWS_CREATECLASSIFIERRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class CreateClassifierResponse;

class CreateClassifierResponsePrivate : public GlueResponsePrivate {

public:

    explicit CreateClassifierResponsePrivate(CreateClassifierResponse * const q);

    void parseCreateClassifierResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateClassifierResponse)
    Q_DISABLE_COPY(CreateClassifierResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
