// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_WORKLINKRESPONSE_P_H
#define QTAWS_WORKLINKRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace WorkLink {

class WorkLinkResponse;

class WorkLinkResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit WorkLinkResponsePrivate(WorkLinkResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(WorkLinkResponse)
    Q_DISABLE_COPY(WorkLinkResponsePrivate)

};

} // namespace WorkLink
} // namespace QtAws

#endif
