// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELEXPORTTASKRESPONSE_P_H
#define QTAWS_CANCELEXPORTTASKRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class CancelExportTaskResponse;

class CancelExportTaskResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit CancelExportTaskResponsePrivate(CancelExportTaskResponse * const q);

    void parseCancelExportTaskResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CancelExportTaskResponse)
    Q_DISABLE_COPY(CancelExportTaskResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
