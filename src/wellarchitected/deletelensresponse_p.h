// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELENSRESPONSE_P_H
#define QTAWS_DELETELENSRESPONSE_P_H

#include "wellarchitectedresponse_p.h"

namespace QtAws {
namespace WellArchitected {

class DeleteLensResponse;

class DeleteLensResponsePrivate : public WellArchitectedResponsePrivate {

public:

    explicit DeleteLensResponsePrivate(DeleteLensResponse * const q);

    void parseDeleteLensResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteLensResponse)
    Q_DISABLE_COPY(DeleteLensResponsePrivate)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
