// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECLASSIFICATIONJOBRESPONSE_P_H
#define QTAWS_CREATECLASSIFICATIONJOBRESPONSE_P_H

#include "macie2response_p.h"

namespace QtAws {
namespace Macie2 {

class CreateClassificationJobResponse;

class CreateClassificationJobResponsePrivate : public Macie2ResponsePrivate {

public:

    explicit CreateClassificationJobResponsePrivate(CreateClassificationJobResponse * const q);

    void parseCreateClassificationJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateClassificationJobResponse)
    Q_DISABLE_COPY(CreateClassificationJobResponsePrivate)

};

} // namespace Macie2
} // namespace QtAws

#endif
