// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECORSPOLICYRESPONSE_P_H
#define QTAWS_DELETECORSPOLICYRESPONSE_P_H

#include "mediastoreresponse_p.h"

namespace QtAws {
namespace MediaStore {

class DeleteCorsPolicyResponse;

class DeleteCorsPolicyResponsePrivate : public MediaStoreResponsePrivate {

public:

    explicit DeleteCorsPolicyResponsePrivate(DeleteCorsPolicyResponse * const q);

    void parseDeleteCorsPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteCorsPolicyResponse)
    Q_DISABLE_COPY(DeleteCorsPolicyResponsePrivate)

};

} // namespace MediaStore
} // namespace QtAws

#endif
