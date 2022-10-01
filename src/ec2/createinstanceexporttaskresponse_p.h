// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINSTANCEEXPORTTASKRESPONSE_P_H
#define QTAWS_CREATEINSTANCEEXPORTTASKRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class CreateInstanceExportTaskResponse;

class CreateInstanceExportTaskResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit CreateInstanceExportTaskResponsePrivate(CreateInstanceExportTaskResponse * const q);

    void parseCreateInstanceExportTaskResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateInstanceExportTaskResponse)
    Q_DISABLE_COPY(CreateInstanceExportTaskResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
