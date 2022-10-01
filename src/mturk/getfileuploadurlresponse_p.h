// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFILEUPLOADURLRESPONSE_P_H
#define QTAWS_GETFILEUPLOADURLRESPONSE_P_H

#include "mturkresponse_p.h"

namespace QtAws {
namespace MTurk {

class GetFileUploadURLResponse;

class GetFileUploadURLResponsePrivate : public MTurkResponsePrivate {

public:

    explicit GetFileUploadURLResponsePrivate(GetFileUploadURLResponse * const q);

    void parseGetFileUploadURLResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetFileUploadURLResponse)
    Q_DISABLE_COPY(GetFileUploadURLResponsePrivate)

};

} // namespace MTurk
} // namespace QtAws

#endif
