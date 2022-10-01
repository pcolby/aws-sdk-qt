// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEFINEINDEXFIELDRESPONSE_P_H
#define QTAWS_DEFINEINDEXFIELDRESPONSE_P_H

#include "cloudsearchresponse_p.h"

namespace QtAws {
namespace CloudSearch {

class DefineIndexFieldResponse;

class DefineIndexFieldResponsePrivate : public CloudSearchResponsePrivate {

public:

    explicit DefineIndexFieldResponsePrivate(DefineIndexFieldResponse * const q);

    void parseDefineIndexFieldResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DefineIndexFieldResponse)
    Q_DISABLE_COPY(DefineIndexFieldResponsePrivate)

};

} // namespace CloudSearch
} // namespace QtAws

#endif
