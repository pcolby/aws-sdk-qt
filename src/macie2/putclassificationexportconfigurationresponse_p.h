// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCLASSIFICATIONEXPORTCONFIGURATIONRESPONSE_P_H
#define QTAWS_PUTCLASSIFICATIONEXPORTCONFIGURATIONRESPONSE_P_H

#include "macie2response_p.h"

namespace QtAws {
namespace Macie2 {

class PutClassificationExportConfigurationResponse;

class PutClassificationExportConfigurationResponsePrivate : public Macie2ResponsePrivate {

public:

    explicit PutClassificationExportConfigurationResponsePrivate(PutClassificationExportConfigurationResponse * const q);

    void parsePutClassificationExportConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutClassificationExportConfigurationResponse)
    Q_DISABLE_COPY(PutClassificationExportConfigurationResponsePrivate)

};

} // namespace Macie2
} // namespace QtAws

#endif
