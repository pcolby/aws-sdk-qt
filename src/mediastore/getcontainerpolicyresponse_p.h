// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONTAINERPOLICYRESPONSE_P_H
#define QTAWS_GETCONTAINERPOLICYRESPONSE_P_H

#include "mediastoreresponse_p.h"

namespace QtAws {
namespace MediaStore {

class GetContainerPolicyResponse;

class GetContainerPolicyResponsePrivate : public MediaStoreResponsePrivate {

public:

    explicit GetContainerPolicyResponsePrivate(GetContainerPolicyResponse * const q);

    void parseGetContainerPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetContainerPolicyResponse)
    Q_DISABLE_COPY(GetContainerPolicyResponsePrivate)

};

} // namespace MediaStore
} // namespace QtAws

#endif
