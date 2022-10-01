// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECLASSIFICATIONJOBRESPONSE_P_H
#define QTAWS_UPDATECLASSIFICATIONJOBRESPONSE_P_H

#include "macie2response_p.h"

namespace QtAws {
namespace Macie2 {

class UpdateClassificationJobResponse;

class UpdateClassificationJobResponsePrivate : public Macie2ResponsePrivate {

public:

    explicit UpdateClassificationJobResponsePrivate(UpdateClassificationJobResponse * const q);

    void parseUpdateClassificationJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateClassificationJobResponse)
    Q_DISABLE_COPY(UpdateClassificationJobResponsePrivate)

};

} // namespace Macie2
} // namespace QtAws

#endif
