// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCORSPOLICYRESPONSE_P_H
#define QTAWS_GETCORSPOLICYRESPONSE_P_H

#include "mediastoreresponse_p.h"

namespace QtAws {
namespace MediaStore {

class GetCorsPolicyResponse;

class GetCorsPolicyResponsePrivate : public MediaStoreResponsePrivate {

public:

    explicit GetCorsPolicyResponsePrivate(GetCorsPolicyResponse * const q);

    void parseGetCorsPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetCorsPolicyResponse)
    Q_DISABLE_COPY(GetCorsPolicyResponsePrivate)

};

} // namespace MediaStore
} // namespace QtAws

#endif
