// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFEATURERESPONSE_P_H
#define QTAWS_DELETEFEATURERESPONSE_P_H

#include "evidentlyresponse_p.h"

namespace QtAws {
namespace Evidently {

class DeleteFeatureResponse;

class DeleteFeatureResponsePrivate : public EvidentlyResponsePrivate {

public:

    explicit DeleteFeatureResponsePrivate(DeleteFeatureResponse * const q);

    void parseDeleteFeatureResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteFeatureResponse)
    Q_DISABLE_COPY(DeleteFeatureResponsePrivate)

};

} // namespace Evidently
} // namespace QtAws

#endif
