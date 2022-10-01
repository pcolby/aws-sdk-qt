// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONTAINERRESPONSE_P_H
#define QTAWS_DELETECONTAINERRESPONSE_P_H

#include "mediastoreresponse_p.h"

namespace QtAws {
namespace MediaStore {

class DeleteContainerResponse;

class DeleteContainerResponsePrivate : public MediaStoreResponsePrivate {

public:

    explicit DeleteContainerResponsePrivate(DeleteContainerResponse * const q);

    void parseDeleteContainerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteContainerResponse)
    Q_DISABLE_COPY(DeleteContainerResponsePrivate)

};

} // namespace MediaStore
} // namespace QtAws

#endif
