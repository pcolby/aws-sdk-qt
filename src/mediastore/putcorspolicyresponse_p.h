// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCORSPOLICYRESPONSE_P_H
#define QTAWS_PUTCORSPOLICYRESPONSE_P_H

#include "mediastoreresponse_p.h"

namespace QtAws {
namespace MediaStore {

class PutCorsPolicyResponse;

class PutCorsPolicyResponsePrivate : public MediaStoreResponsePrivate {

public:

    explicit PutCorsPolicyResponsePrivate(PutCorsPolicyResponse * const q);

    void parsePutCorsPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutCorsPolicyResponse)
    Q_DISABLE_COPY(PutCorsPolicyResponsePrivate)

};

} // namespace MediaStore
} // namespace QtAws

#endif
