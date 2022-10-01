// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETOBJECTINFORMATIONRESPONSE_P_H
#define QTAWS_GETOBJECTINFORMATIONRESPONSE_P_H

#include "clouddirectoryresponse_p.h"

namespace QtAws {
namespace CloudDirectory {

class GetObjectInformationResponse;

class GetObjectInformationResponsePrivate : public CloudDirectoryResponsePrivate {

public:

    explicit GetObjectInformationResponsePrivate(GetObjectInformationResponse * const q);

    void parseGetObjectInformationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetObjectInformationResponse)
    Q_DISABLE_COPY(GetObjectInformationResponsePrivate)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
