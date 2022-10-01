// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESTUDIORESPONSE_P_H
#define QTAWS_DELETESTUDIORESPONSE_P_H

#include "emrresponse_p.h"

namespace QtAws {
namespace Emr {

class DeleteStudioResponse;

class DeleteStudioResponsePrivate : public EmrResponsePrivate {

public:

    explicit DeleteStudioResponsePrivate(DeleteStudioResponse * const q);

    void parseDeleteStudioResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteStudioResponse)
    Q_DISABLE_COPY(DeleteStudioResponsePrivate)

};

} // namespace Emr
} // namespace QtAws

#endif
