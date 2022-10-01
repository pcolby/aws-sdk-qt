// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCLASSIFICATIONEXPORTCONFIGURATIONRESPONSE_P_H
#define QTAWS_GETCLASSIFICATIONEXPORTCONFIGURATIONRESPONSE_P_H

#include "macie2response_p.h"

namespace QtAws {
namespace Macie2 {

class GetClassificationExportConfigurationResponse;

class GetClassificationExportConfigurationResponsePrivate : public Macie2ResponsePrivate {

public:

    explicit GetClassificationExportConfigurationResponsePrivate(GetClassificationExportConfigurationResponse * const q);

    void parseGetClassificationExportConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetClassificationExportConfigurationResponse)
    Q_DISABLE_COPY(GetClassificationExportConfigurationResponsePrivate)

};

} // namespace Macie2
} // namespace QtAws

#endif
