// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDPROJECTSESSIONACTIONRESPONSE_P_H
#define QTAWS_SENDPROJECTSESSIONACTIONRESPONSE_P_H

#include "databrewresponse_p.h"

namespace QtAws {
namespace DataBrew {

class SendProjectSessionActionResponse;

class SendProjectSessionActionResponsePrivate : public DataBrewResponsePrivate {

public:

    explicit SendProjectSessionActionResponsePrivate(SendProjectSessionActionResponse * const q);

    void parseSendProjectSessionActionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SendProjectSessionActionResponse)
    Q_DISABLE_COPY(SendProjectSessionActionResponsePrivate)

};

} // namespace DataBrew
} // namespace QtAws

#endif
