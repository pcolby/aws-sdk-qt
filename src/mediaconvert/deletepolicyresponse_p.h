// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPOLICYRESPONSE_P_H
#define QTAWS_DELETEPOLICYRESPONSE_P_H

#include "mediaconvertresponse_p.h"

namespace QtAws {
namespace MediaConvert {

class DeletePolicyResponse;

class DeletePolicyResponsePrivate : public MediaConvertResponsePrivate {

public:

    explicit DeletePolicyResponsePrivate(DeletePolicyResponse * const q);

    void parseDeletePolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeletePolicyResponse)
    Q_DISABLE_COPY(DeletePolicyResponsePrivate)

};

} // namespace MediaConvert
} // namespace QtAws

#endif
