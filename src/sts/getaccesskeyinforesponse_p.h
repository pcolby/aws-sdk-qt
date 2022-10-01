// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACCESSKEYINFORESPONSE_P_H
#define QTAWS_GETACCESSKEYINFORESPONSE_P_H

#include "stsresponse_p.h"

namespace QtAws {
namespace Sts {

class GetAccessKeyInfoResponse;

class GetAccessKeyInfoResponsePrivate : public StsResponsePrivate {

public:

    explicit GetAccessKeyInfoResponsePrivate(GetAccessKeyInfoResponse * const q);

    void parseGetAccessKeyInfoResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetAccessKeyInfoResponse)
    Q_DISABLE_COPY(GetAccessKeyInfoResponsePrivate)

};

} // namespace Sts
} // namespace QtAws

#endif
