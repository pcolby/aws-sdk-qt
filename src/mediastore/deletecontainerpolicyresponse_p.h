// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONTAINERPOLICYRESPONSE_P_H
#define QTAWS_DELETECONTAINERPOLICYRESPONSE_P_H

#include "mediastoreresponse_p.h"

namespace QtAws {
namespace MediaStore {

class DeleteContainerPolicyResponse;

class DeleteContainerPolicyResponsePrivate : public MediaStoreResponsePrivate {

public:

    explicit DeleteContainerPolicyResponsePrivate(DeleteContainerPolicyResponse * const q);

    void parseDeleteContainerPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteContainerPolicyResponse)
    Q_DISABLE_COPY(DeleteContainerPolicyResponsePrivate)

};

} // namespace MediaStore
} // namespace QtAws

#endif
