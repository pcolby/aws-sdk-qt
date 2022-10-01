// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHTYPEDLINKRESPONSE_P_H
#define QTAWS_ATTACHTYPEDLINKRESPONSE_P_H

#include "clouddirectoryresponse_p.h"

namespace QtAws {
namespace CloudDirectory {

class AttachTypedLinkResponse;

class AttachTypedLinkResponsePrivate : public CloudDirectoryResponsePrivate {

public:

    explicit AttachTypedLinkResponsePrivate(AttachTypedLinkResponse * const q);

    void parseAttachTypedLinkResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AttachTypedLinkResponse)
    Q_DISABLE_COPY(AttachTypedLinkResponsePrivate)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
