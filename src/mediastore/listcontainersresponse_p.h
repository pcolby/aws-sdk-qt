// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONTAINERSRESPONSE_P_H
#define QTAWS_LISTCONTAINERSRESPONSE_P_H

#include "mediastoreresponse_p.h"

namespace QtAws {
namespace MediaStore {

class ListContainersResponse;

class ListContainersResponsePrivate : public MediaStoreResponsePrivate {

public:

    explicit ListContainersResponsePrivate(ListContainersResponse * const q);

    void parseListContainersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListContainersResponse)
    Q_DISABLE_COPY(ListContainersResponsePrivate)

};

} // namespace MediaStore
} // namespace QtAws

#endif
