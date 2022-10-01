// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CODESTARNOTIFICATIONSRESPONSE_P_H
#define QTAWS_CODESTARNOTIFICATIONSRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace CodestarNotifications {

class CodestarNotificationsResponse;

class CodestarNotificationsResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit CodestarNotificationsResponsePrivate(CodestarNotificationsResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CodestarNotificationsResponse)
    Q_DISABLE_COPY(CodestarNotificationsResponsePrivate)

};

} // namespace CodestarNotifications
} // namespace QtAws

#endif
