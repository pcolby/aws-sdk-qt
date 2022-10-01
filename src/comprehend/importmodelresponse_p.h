// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTMODELRESPONSE_P_H
#define QTAWS_IMPORTMODELRESPONSE_P_H

#include "comprehendresponse_p.h"

namespace QtAws {
namespace Comprehend {

class ImportModelResponse;

class ImportModelResponsePrivate : public ComprehendResponsePrivate {

public:

    explicit ImportModelResponsePrivate(ImportModelResponse * const q);

    void parseImportModelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ImportModelResponse)
    Q_DISABLE_COPY(ImportModelResponsePrivate)

};

} // namespace Comprehend
} // namespace QtAws

#endif
