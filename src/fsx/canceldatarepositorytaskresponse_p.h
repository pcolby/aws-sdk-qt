// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELDATAREPOSITORYTASKRESPONSE_P_H
#define QTAWS_CANCELDATAREPOSITORYTASKRESPONSE_P_H

#include "fsxresponse_p.h"

namespace QtAws {
namespace FSx {

class CancelDataRepositoryTaskResponse;

class CancelDataRepositoryTaskResponsePrivate : public FSxResponsePrivate {

public:

    explicit CancelDataRepositoryTaskResponsePrivate(CancelDataRepositoryTaskResponse * const q);

    void parseCancelDataRepositoryTaskResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CancelDataRepositoryTaskResponse)
    Q_DISABLE_COPY(CancelDataRepositoryTaskResponsePrivate)

};

} // namespace FSx
} // namespace QtAws

#endif
