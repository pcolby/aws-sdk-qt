// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDATAREPOSITORYTASKRESPONSE_P_H
#define QTAWS_CREATEDATAREPOSITORYTASKRESPONSE_P_H

#include "fsxresponse_p.h"

namespace QtAws {
namespace FSx {

class CreateDataRepositoryTaskResponse;

class CreateDataRepositoryTaskResponsePrivate : public FSxResponsePrivate {

public:

    explicit CreateDataRepositoryTaskResponsePrivate(CreateDataRepositoryTaskResponse * const q);

    void parseCreateDataRepositoryTaskResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateDataRepositoryTaskResponse)
    Q_DISABLE_COPY(CreateDataRepositoryTaskResponsePrivate)

};

} // namespace FSx
} // namespace QtAws

#endif
