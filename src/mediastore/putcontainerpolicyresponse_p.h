// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCONTAINERPOLICYRESPONSE_P_H
#define QTAWS_PUTCONTAINERPOLICYRESPONSE_P_H

#include "mediastoreresponse_p.h"

namespace QtAws {
namespace MediaStore {

class PutContainerPolicyResponse;

class PutContainerPolicyResponsePrivate : public MediaStoreResponsePrivate {

public:

    explicit PutContainerPolicyResponsePrivate(PutContainerPolicyResponse * const q);

    void parsePutContainerPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutContainerPolicyResponse)
    Q_DISABLE_COPY(PutContainerPolicyResponsePrivate)

};

} // namespace MediaStore
} // namespace QtAws

#endif
