// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONTAINERRESPONSE_P_H
#define QTAWS_CREATECONTAINERRESPONSE_P_H

#include "mediastoreresponse_p.h"

namespace QtAws {
namespace MediaStore {

class CreateContainerResponse;

class CreateContainerResponsePrivate : public MediaStoreResponsePrivate {

public:

    explicit CreateContainerResponsePrivate(CreateContainerResponse * const q);

    void parseCreateContainerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateContainerResponse)
    Q_DISABLE_COPY(CreateContainerResponsePrivate)

};

} // namespace MediaStore
} // namespace QtAws

#endif
