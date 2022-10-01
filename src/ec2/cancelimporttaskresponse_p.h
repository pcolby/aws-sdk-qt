// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELIMPORTTASKRESPONSE_P_H
#define QTAWS_CANCELIMPORTTASKRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class CancelImportTaskResponse;

class CancelImportTaskResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit CancelImportTaskResponsePrivate(CancelImportTaskResponse * const q);

    void parseCancelImportTaskResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CancelImportTaskResponse)
    Q_DISABLE_COPY(CancelImportTaskResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
