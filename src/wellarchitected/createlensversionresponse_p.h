// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELENSVERSIONRESPONSE_P_H
#define QTAWS_CREATELENSVERSIONRESPONSE_P_H

#include "wellarchitectedresponse_p.h"

namespace QtAws {
namespace WellArchitected {

class CreateLensVersionResponse;

class CreateLensVersionResponsePrivate : public WellArchitectedResponsePrivate {

public:

    explicit CreateLensVersionResponsePrivate(CreateLensVersionResponse * const q);

    void parseCreateLensVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateLensVersionResponse)
    Q_DISABLE_COPY(CreateLensVersionResponsePrivate)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
